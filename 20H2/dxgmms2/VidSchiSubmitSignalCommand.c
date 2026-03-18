/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x1C00140F0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D3D0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1320 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C001651C (VidSchiCompleteSignalCommmand.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003586C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r8
  _QWORD *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1712), &LockHandle);
  v13 = 0;
  v12[1] = v12;
  v6 = v12;
  v12[0] = v12;
  if ( *((_QWORD *)v2 + 5) == v1 + 664 )
  {
    v3 = 1;
  }
  else
  {
    v7 = *((_DWORD *)v2 + 20);
    if ( (*((_DWORD *)v2 + 68) & 1) != 0 )
    {
      if ( (v7 & 4) == 0 )
      {
        LOBYTE(v5) = 1;
        VidSchiCompleteSignalCommmand(v12, v2, v5);
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 964));
        v7 = *((_DWORD *)v2 + 20);
        v6 = (_QWORD *)v12[0];
      }
      v8 = v7 | 9;
    }
    else
    {
      v8 = v7 | 1;
    }
    *((_DWORD *)v2 + 20) = v8;
  }
  while ( 1 )
  {
    if ( (_QWORD *)v6[1] != v12 || (v9 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    v12[0] = *v6;
    *(_QWORD *)(v9 + 8) = v12;
    if ( v6 == v12 )
      break;
    *v6 = 0LL;
    v6[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v12, (struct VIDSCH_HW_QUEUE *)(v6 - 22));
    v6 = (_QWORD *)v12[0];
  }
  v13 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v10, v11);
    while ( v2 );
  }
  if ( !v13 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v12);
}
