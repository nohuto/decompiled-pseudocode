/*
 * XREFs of __report_rangecheckfailure @ 0x1404B12CC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x14037E6D8 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D0620 (strspn.c)
 *     strtok_s @ 0x1403D4A00 (strtok_s.c)
 *     LocalGetStringForControl @ 0x14063EFE4 (LocalGetStringForControl.c)
 *     RtlCultureNameToLCID @ 0x14078AE70 (RtlCultureNameToLCID.c)
 *     SepParseElamCertResources @ 0x14078B6F8 (SepParseElamCertResources.c)
 *     WdipSemLoadNextEndEvent @ 0x14079A970 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A752C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F32A0 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x140911C90 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14095A4FC (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x1409768AC (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C38F0 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409ED1E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A367C0 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A56F60 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A574F4 (CmpSetupConfigurationTree.c)
 *     KsepMatchInitBiosInfo @ 0x140A65B1C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A69A18 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
