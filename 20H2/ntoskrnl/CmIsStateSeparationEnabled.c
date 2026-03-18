/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140328A68
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14069004C (SeQuerySigningPolicyWorker.c)
 *     RtlIsStateSeparationEnabled @ 0x1406D9470 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x1406D9488 (KIsUnlockSettingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407644C8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x140798E30 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140798FEC (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408B2D9C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408BA344 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408BA47C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x140961724 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
