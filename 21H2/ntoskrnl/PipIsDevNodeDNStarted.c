/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1402DEAB0
 * Callers:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PiDevCfgLogDeviceStarted @ 0x1407456F8 (PiDevCfgLogDeviceStarted.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x140777C08 (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140778C00 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1409590D0 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 774 && v1 <= 783;
}
