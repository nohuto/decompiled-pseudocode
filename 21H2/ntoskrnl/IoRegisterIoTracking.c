/*
 * XREFs of IoRegisterIoTracking @ 0x140937E50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x140556DE0 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1405594BC (IoPerfInit.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  _QWORD *Pool2; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  struct _KTHREAD *v8; // rax

  *a2 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1918136137LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopPerfIoTrackingLock, 0LL);
  v7 = (_QWORD *)qword_140C46FB8;
  if ( *(__int64 **)qword_140C46FB8 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *Pool2 = &IopPerfIoTrackingListHead;
  Pool2[1] = v7;
  *v7 = Pool2;
  qword_140C46FB8 = (__int64)Pool2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v8 = KeGetCurrentThread();
  if ( v8->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = Pool2;
  return result;
}
