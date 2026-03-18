/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x140793514
 * Callers:
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A564A0 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A564C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
