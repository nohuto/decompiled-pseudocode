/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x14078C344
 * Callers:
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A4D904 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A4D924 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
