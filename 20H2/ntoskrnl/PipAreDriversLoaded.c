/*
 * XREFs of PipAreDriversLoaded @ 0x140363634
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14071FBE0 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x140363658 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
