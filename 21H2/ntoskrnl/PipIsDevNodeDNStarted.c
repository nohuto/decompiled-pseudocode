/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1402651F8
 * Callers:
 *     PipRestoreDevNodeState @ 0x14036D7A0 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036F9E8 (PipSetDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140639D48 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407365C8 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x140737710 (PnpProcessDependencyRelations.c)
 *     PiDevCfgLogDeviceStarted @ 0x14073ADD4 (PiDevCfgLogDeviceStarted.c)
 *     PnpCheckForActiveDependencies @ 0x1407418B0 (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x140742E20 (PiDevCfgConfigureDevice.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408B3494 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
