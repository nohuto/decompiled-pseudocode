/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14075D030
 * Callers:
 *     PipProcessStartPhase2 @ 0x14072341C (PipProcessStartPhase2.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x14072EB84 (PiUpdateGuestAssignedState.c)
 *     PiProcessHaltDevice @ 0x14089E23C (PiProcessHaltDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408A6C60 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408ACE9C (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1408AED40 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x1408B0F10 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B1004 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140732F74 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14075D0F8 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, unsigned int a3, int a4)
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
