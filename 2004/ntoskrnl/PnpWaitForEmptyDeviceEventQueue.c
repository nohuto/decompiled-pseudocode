/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x14078C318
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140A4D924 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
