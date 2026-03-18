/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x14036204C
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140569750 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1407115E0 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x140758830 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408DEAAC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x14035FF08 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
