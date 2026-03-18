/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140358350
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140617804 (SeQuerySigningPolicyWorker.c)
 *     RtlIsStateSeparationEnabled @ 0x1407068F0 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x140706908 (KIsUnlockSettingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140755888 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14078C8AC (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408AD26C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B4724 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B485C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14095B964 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
