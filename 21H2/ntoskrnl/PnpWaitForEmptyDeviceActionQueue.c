/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407AC8C4
 * Callers:
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A5E40C (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5E42C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
