/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1407934E8
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140A564C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
