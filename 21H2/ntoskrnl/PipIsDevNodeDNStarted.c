/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140253288
 * Callers:
 *     PipRestoreDevNodeState @ 0x14036D950 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14062EB58 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140736788 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x1407378D0 (PnpProcessDependencyRelations.c)
 *     PiDevCfgLogDeviceStarted @ 0x14073AF94 (PiDevCfgLogDeviceStarted.c)
 *     PnpCheckForActiveDependencies @ 0x140741A70 (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408B35F4 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
