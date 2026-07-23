/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1402486E8
 * Callers:
 *     RtlIsStateSeparationEnabled @ 0x1406170D0 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x1406170E8 (KIsUnlockSettingEnabled.c)
 *     SeQuerySigningPolicyWorker @ 0x1406F2F48 (SeQuerySigningPolicyWorker.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140767C78 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407A370C (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408B04CC (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7984 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B7ABC (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14095F184 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
