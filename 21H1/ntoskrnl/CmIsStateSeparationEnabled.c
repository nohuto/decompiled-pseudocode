/*
 * XREFs of CmIsStateSeparationEnabled @ 0x14031A8A0
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14066ED48 (SeQuerySigningPolicyWorker.c)
 *     RtlIsStateSeparationEnabled @ 0x1406E2F30 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x1406E2F48 (KIsUnlockSettingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407511F8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14078A9DC (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408ABF4C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B3404 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B353C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14095A5C4 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
