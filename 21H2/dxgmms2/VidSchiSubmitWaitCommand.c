/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C000EC78
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00F379C (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E658 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001E78A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003AAF4 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rdi
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-50h] BYREF
  char v16; // [rsp+30h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 104);
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v16 = 0;
  v15[1] = v15;
  v15[0] = v15;
  if ( (*(_BYTE *)(v5 + 3036) & 1) != 0
    || *(_DWORD *)(v5 + 3012)
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    v14 = *((_DWORD *)v2 + 68);
    if ( (v14 & 1) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v14 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v15, v2, v6);
      else
        VidSchiUnwaitWaitQueuePacket((__int64)v15, (__int64)v2, v6, 0LL);
    }
  }
  if ( (*((_DWORD *)v2 + 68) & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v11 = *((_QWORD *)v2 + 11);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
    v19 = 0LL;
    v18 = 0LL;
    if ( (*(_DWORD *)(v11 + 184) & 4) == 0 )
    {
      WdLogSingleEntry3(4LL, v12, v11, *((unsigned int *)v2 + 28));
      v13 = *(_DWORD *)(v11 + 184) | 4;
      *(_QWORD *)(v11 + 656) = v2;
      *(_DWORD *)(v11 + 184) = v13;
    }
    VidSchiCompleteRewindPacket(v11, 1);
    VidSchiUpdateContextStatus(v1, 4LL, 25413LL);
  }
  while ( 1 )
  {
    v7 = (_QWORD *)v15[0];
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 || (v8 = *(_QWORD *)v15[0], *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) != v15[0]) )
      __fastfail(3u);
    v15[0] = *(_QWORD *)v15[0];
    *(_QWORD *)(v8 + 8) = v15;
    if ( v7 == v15 )
      break;
    *v7 = 0LL;
    v7[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v15, (struct VIDSCH_HW_QUEUE *)(v7 - 22));
  }
  v16 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v9, v10);
    while ( v2 );
  }
  if ( !v16 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v15);
}
