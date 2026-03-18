/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14035D624
 * Callers:
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140710850 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpCheckForActiveDependencies @ 0x140726F40 (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PnpProcessDependencyRelations @ 0x140732248 (PnpProcessDependencyRelations.c)
 *     PiDevCfgLogDeviceStarted @ 0x1407354E8 (PiDevCfgLogDeviceStarted.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14075D0F8 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408AF074 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
