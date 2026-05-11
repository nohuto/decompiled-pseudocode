/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C0002CA0
 * Callers:
 *     Feature_4145917243__private_IsEnabledFallback @ 0x1C0003268 (Feature_4145917243__private_IsEnabledFallback.c)
 *     Feature_2797446457__private_IsEnabledFallback @ 0x1C0003C60 (Feature_2797446457__private_IsEnabledFallback.c)
 *     Feature_1305584954__private_IsEnabledFallback @ 0x1C0004354 (Feature_1305584954__private_IsEnabledFallback.c)
 *     Feature_3453068602__private_IsEnabledFallback @ 0x1C00043A8 (Feature_3453068602__private_IsEnabledFallback.c)
 *     Feature_853910841__private_IsEnabledFallback @ 0x1C00043FC (Feature_853910841__private_IsEnabledFallback.c)
 *     Feature_4140672313__private_IsEnabledFallback @ 0x1C0004450 (Feature_4140672313__private_IsEnabledFallback.c)
 *     Feature_3805127995__private_IsEnabledFallback @ 0x1C00044A4 (Feature_3805127995__private_IsEnabledFallback.c)
 *     Feature_28420408__private_IsEnabledFallback @ 0x1C00044F8 (Feature_28420408__private_IsEnabledFallback.c)
 *     Feature_1212525881__private_IsEnabledFallback @ 0x1C000454C (Feature_1212525881__private_IsEnabledFallback.c)
 *     Feature_1615179064__private_IsEnabledFallback @ 0x1C00045A0 (Feature_1615179064__private_IsEnabledFallback.c)
 *     Feature_3207179578__private_IsEnabledFallback @ 0x1C00045F4 (Feature_3207179578__private_IsEnabledFallback.c)
 *     Feature_857582905__private_IsEnabledFallback @ 0x1C0004648 (Feature_857582905__private_IsEnabledFallback.c)
 *     Feature_1240224058__private_IsEnabledFallback @ 0x1C000469C (Feature_1240224058__private_IsEnabledFallback.c)
 *     Feature_3052163386__private_IsEnabledFallback @ 0x1C00046F0 (Feature_3052163386__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000282C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0002BA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0002D34 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
