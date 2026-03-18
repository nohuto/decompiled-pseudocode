/*
 * XREFs of VidSchSubmitWaitToHwQueue @ 0x1C003A9D0
 * Callers:
 *     VidSchWaitForPagingFence @ 0x1C00D4520 (VidSchWaitForPagingFence.c)
 * Callees:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00361F0 (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037AC0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C114 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D49BC (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitWaitToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_SYNC_OBJECT *a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 HwQueuePacket; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  int v17; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  if ( *((_DWORD *)a2 + 11) == 5 && *((_BYTE *)a2 + 28) )
    return 3221225760LL;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, 0LL);
  v12 = HwQueuePacket;
  if ( HwQueuePacket )
  {
    *(_DWORD *)HwQueuePacket = 895576406;
    *(_DWORD *)(HwQueuePacket + 48) = 4;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v12 + 72) = 0LL;
    *(_DWORD *)(v12 + 272) &= ~1u;
    *(_QWORD *)(v12 + 104) = CurrentThread;
    *(_QWORD *)(v12 + 304) = a3;
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
    v15[3] = a2;
    v15[4] = a3;
    v15[5] = a1;
    WdLogEvent5_WdEvent(v15);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
    *(_QWORD *)(v12 + 280) = a2;
    v17 = VidSchiAcquireSyncObjectForHwQueue(a2, (struct _VIDSCH_QUEUE_PACKET *)v12, v16);
    if ( v17 < 0 || (*(_DWORD *)(v12 + 272) & 1) != 0 )
    {
      VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)v12);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v17;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v12);
      return 0LL;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    *(_QWORD *)(v13 + 32) = 4180LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225495LL;
  }
}
