/*
 * XREFs of PnpInitializeProcessor @ 0x140506EF8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1408B86C0 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}
