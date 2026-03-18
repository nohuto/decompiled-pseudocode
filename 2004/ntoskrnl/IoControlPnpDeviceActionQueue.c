/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1402D838C
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140569DA0 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406A4A40 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14075A280 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408DFD0C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x1402D8314 (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1402DA3D4 (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
