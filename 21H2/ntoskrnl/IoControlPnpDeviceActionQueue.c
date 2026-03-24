/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1402C6F2C
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F1E0 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406B45B0 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14076CDB0 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E334C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1402C6F4C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1402C6FF0 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
