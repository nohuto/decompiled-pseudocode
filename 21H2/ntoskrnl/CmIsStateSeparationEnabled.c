/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1402201F8
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x140697EF0 (PiDevCfgEnumDeviceKeys.c)
 *     KIsUnlockSettingEnabled @ 0x14069954C (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140800BAC (PopBcdSetDefaultResumeObjectElements.c)
 *     PiPnpRtlInit @ 0x140825E70 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140826000 (PiDrvDbInit.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408264C0 (PiDrvDbResolveNodeFilePaths.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x1409335E0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14093CC30 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     PiCMEnumerateSubKeys @ 0x140955628 (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14095DAF0 (PiDrvDbResolveKeyFilePaths.c)
 *     KIsSideloadingEnabled @ 0x140A0AC70 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
