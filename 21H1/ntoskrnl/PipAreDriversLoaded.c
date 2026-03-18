/*
 * XREFs of PipAreDriversLoaded @ 0x14035D650
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140710850 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14035D674 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
