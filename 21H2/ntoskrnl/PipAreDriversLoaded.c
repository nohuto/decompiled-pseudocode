/*
 * XREFs of PipAreDriversLoaded @ 0x1402DEADC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140778C00 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1402DEB00 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
