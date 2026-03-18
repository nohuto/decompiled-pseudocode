/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140765430
 * Callers:
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PiUpdateGuestAssignedState @ 0x140749ECC (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase2 @ 0x140768EA8 (PipProcessStartPhase2.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     IopQueueDeviceResetEvent @ 0x1409457D0 (IopQueueDeviceResetEvent.c)
 *     PiProcessHaltDevice @ 0x140947864 (PiProcessHaltDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14094F860 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1409568C8 (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14095B48C (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x14076729C (PnpSetTargetDeviceRemove.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]

  v7 = a1;
  if ( !a1 )
    return 3221225486LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PnpRequestDeviceRemovalWorker(v7, v7, a2, 2, 0);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  return PnpSetTargetDeviceRemove(*(PVOID *)(v7 + 32), 1, a3, a4, 0LL, v9, v10, 0LL, 0LL, 0LL, 0LL);
}
