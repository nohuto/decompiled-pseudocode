/*
 * XREFs of __report_rangecheckfailure @ 0x1404B0ECC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14037DC18 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403CF7E0 (strspn.c)
 *     strtok_s @ 0x1403D3BC0 (strtok_s.c)
 *     LocalGetStringForControl @ 0x14068F104 (LocalGetStringForControl.c)
 *     WdipSemLoadNextEndEvent @ 0x140784F98 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140785928 (WdipSemLoadNextScenario.c)
 *     SepParseElamCertResources @ 0x1407928D0 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x1407950A0 (RtlCultureNameToLCID.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A620C (PiDevCfgSplitDriverConfigurationId.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F1FB0 (PopStatsNotifyPowerRequestCsState.c)
 *     RtlUnicodeStringToInt64 @ 0x1409108F0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14095915C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x14097550C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409C38E0 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1409ED1E8 (HdlspPutWideString.c)
 *     IopInitializeResourceMap @ 0x140A372CC (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A51260 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A517F4 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140A6613C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A69598 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
