/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1407A25C8
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140A5C8C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
