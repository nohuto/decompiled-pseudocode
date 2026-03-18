/*
 * XREFs of Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     NtFilterToken @ 0x1406A83E0 (NtFilterToken.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x1407C2500 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038C474 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_HardenTokenPPLRestrictions__private_featureState,
                                (__int64)&Feature_Servicing_HardenTokenPPLRestrictions__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_HardenTokenPPLRestrictions__private_reporting,
    0x27D5B65u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_HardenTokenPPLRestrictions_logged_traits,
    v1,
    v3);
  return v1;
}
