/*
 * XREFs of Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00FB5C0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_::operator() @ 0x1C01592A4 (_lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_--operator().c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C01581A0 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_2109c_34956946__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_2109c_34956946__private_featureState,
                                (__int64)&Feature_Servicing_2109c_34956946__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_Servicing_2109c_34956946__private_reporting,
    0x2156692u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_MatchedFrameCookieWatson_35935814_logged_traits,
    v1,
    v3);
  return v1;
}
