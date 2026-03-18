/*
 * XREFs of PipAreDriversLoaded @ 0x1402DCDE8
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406A5F20 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1402DCE0C (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
