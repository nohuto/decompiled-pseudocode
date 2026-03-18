/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x14082EF8C
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140B10D98 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
