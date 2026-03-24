/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1402C9DF8
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 *     RtlIsStateSeparationEnabled @ 0x1406B7BC0 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x1406B7BD8 (KIsUnlockSettingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140767AB8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x1407A3350 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407A350C (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408B036C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7824 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B795C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7E64 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14095EFA4 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
