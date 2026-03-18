/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140361F20
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056D7D0 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406D7550 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x140768A40 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E5B4C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x140362B34 (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140362BAC (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
