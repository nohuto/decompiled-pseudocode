/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140363608
 * Callers:
 *     PipSetDevNodeState @ 0x14036D418 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14037E510 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14071FBE0 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x1407360FC (PnpCheckForActiveDependencies.c)
 *     PiDevCfgLogDeviceStarted @ 0x14073D3CC (PiDevCfgLogDeviceStarted.c)
 *     PnpProcessDependencyRelations @ 0x140740610 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140742960 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408B5EC4 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
