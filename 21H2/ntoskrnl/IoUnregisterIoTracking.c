/*
 * XREFs of IoUnregisterIoTracking @ 0x140937F70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x140556DE0 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1405595B8 (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdx
  PVOID *v4; // rax
  struct _KTHREAD *v5; // rax
  bool v6; // zf

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopPerfIoTrackingLock, 0LL);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v5 = KeGetCurrentThread();
  v6 = v5->SpecialApcDisable++ == -1;
  if ( v6 && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(P, 0x72546F49u);
}
