/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x14024566C
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x140613780 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14076CF70 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E34AC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x14024568C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140245730 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
