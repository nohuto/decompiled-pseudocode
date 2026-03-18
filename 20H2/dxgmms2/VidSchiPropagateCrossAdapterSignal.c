/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C00304EC
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B950 (VidSchiCompleteSignalSyncObject.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0015DF4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FD8 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[26] + 8LL), &LockHandle);
  v2 = (_QWORD **)(a1[26] + 16LL);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i - 18 != a1 )
      ((void (*)(void))i[9])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
