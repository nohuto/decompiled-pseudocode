/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140742898
 * Callers:
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x140739488 (PiUpdateGuestAssignedState.c)
 *     PipProcessStartPhase2 @ 0x1407436E8 (PipProcessStartPhase2.c)
 *     PiProcessHaltDevice @ 0x1408A508C (PiProcessHaltDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408ADAB0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B3CEC (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1408B5B90 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x1408B7E50 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B7F44 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140741FC0 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140742960 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    LOBYTE(v8) = a2;
    PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    return PnpSetTargetDeviceRemove(*(_QWORD **)(a1 + 32), 1, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
