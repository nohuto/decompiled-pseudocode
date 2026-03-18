/*
 * XREFs of PnpInitializeProcessor @ 0x14050A828
 * Callers:
 *     KeStartDynamicProcessor @ 0x1408BE2E0 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14036E774 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}
