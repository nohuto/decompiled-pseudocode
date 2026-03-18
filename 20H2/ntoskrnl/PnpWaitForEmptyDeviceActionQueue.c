/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407A25F4
 * Callers:
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A5C8A0 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5C8C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
