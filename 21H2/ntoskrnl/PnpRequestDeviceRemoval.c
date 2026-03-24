/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140736688
 * Callers:
 *     PipProcessStartPhase2 @ 0x14073DCFC (PipProcessStartPhase2.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x140749A3C (PiProcessQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x140749CAC (PiUpdateGuestAssignedState.c)
 *     PiProcessHaltDevice @ 0x1408A265C (PiProcessHaltDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408AB080 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408B12BC (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1408B3160 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x1408B5330 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B5424 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407365C8 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x140738FD4 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    PnpRequestDeviceRemovalWorker(a1, a1, a2, 2, 0);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
