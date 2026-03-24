/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C0013B98
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0090830 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D04F0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C00070D0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C000A060 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000AFF0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010DD0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0013D54 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0016544 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035ACC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  char v19; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  v19 = 0;
  v18[1] = v18;
  v18[0] = v18;
  if ( (*(_BYTE *)(v5 + 2940) & 1) != 0
    || *(_DWORD *)(v5 + 2916)
    || *(_BYTE *)(v4 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0) )
  {
    v17 = *((_DWORD *)v2 + 68);
    if ( (v17 & 1) == 0 )
    {
      LOBYTE(v8) = 1;
      if ( (v17 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v18, v2, v8);
      else
        VidSchiUnwaitWaitQueuePacket((__int64)v18, (__int64)v2, v8, 0LL);
    }
  }
  if ( (*((_DWORD *)v2 + 68) & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v13 = *((_QWORD *)v2 + 11);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 24LL);
    if ( (*(_DWORD *)(v13 + 184) & 4) == 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
      v15[3] = v14;
      v15[4] = v13;
      v15[5] = *((unsigned int *)v2 + 28);
      WdLogEvent5_WdEvent(v15);
      v16 = *(_DWORD *)(v13 + 184) | 4;
      *(_QWORD *)(v13 + 656) = v2;
      *(_DWORD *)(v13 + 184) = v16;
    }
    VidSchiCompleteRewindPacket(v13, 1LL);
    VidSchiUpdateContextStatus(v1, 4uLL, 24098LL);
  }
  while ( 1 )
  {
    v9 = (_QWORD *)v18[0];
    if ( *(_QWORD **)(v18[0] + 8LL) != v18 || (v10 = *(_QWORD *)v18[0], *(_QWORD *)(*(_QWORD *)v18[0] + 8LL) != v18[0]) )
      __fastfail(3u);
    v18[0] = *(_QWORD *)v18[0];
    *(_QWORD *)(v10 + 8) = v18;
    if ( v9 == v18 )
      break;
    *v9 = 0LL;
    v9[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v18, (struct VIDSCH_HW_QUEUE *)(v9 - 22));
  }
  v19 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v11, v12);
    while ( v2 );
  }
  if ( !v19 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v18);
}
