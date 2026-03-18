/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1402DCDBC
 * Callers:
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14037C7E0 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406A5F20 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x14072766C (PnpCheckForActiveDependencies.c)
 *     PiDevCfgLogDeviceStarted @ 0x14072EC14 (PiDevCfgLogDeviceStarted.c)
 *     PnpProcessDependencyRelations @ 0x14073126C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407334D0 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408B0394 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
