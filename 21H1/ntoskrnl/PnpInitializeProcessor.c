/*
 * XREFs of PnpInitializeProcessor @ 0x1405068A8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1408B73A0 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14036BAD4 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}
