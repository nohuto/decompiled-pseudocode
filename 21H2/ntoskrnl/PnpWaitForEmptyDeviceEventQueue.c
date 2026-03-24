/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1407AC698
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140A5D42C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
