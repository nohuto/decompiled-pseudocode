/*
 * XREFs of __report_rangecheckfailure @ 0x1404B4AAC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022B610 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x140380408 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403D32B0 (strspn.c)
 *     strtok_s @ 0x1403D7690 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1406FB584 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x1407A19A8 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x1407A4180 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A9CA0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AD05C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x1409177D0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x1409602BC (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x14097C67C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C9910 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409F31E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A3C7C0 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A575E0 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A57B74 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140A6CDEC (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6FEB8 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
