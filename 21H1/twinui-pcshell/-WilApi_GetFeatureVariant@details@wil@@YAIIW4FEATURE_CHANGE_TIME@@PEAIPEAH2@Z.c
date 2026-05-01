/*
 * XREFs of ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007D458
 * Callers:
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18007D3BC (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@detail.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180261010 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

unsigned int (*__fastcall wil::details::WilApi_GetFeatureVariant(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int *a5))(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *)
{
  unsigned int (*result)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax

  if ( g_wil_details_internalGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *, int *))g_wil_details_internalGetFeatureVariant)(
                                                                                                     this,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a5);
  result = g_wil_details_apiGetFeatureVariant;
  if ( g_wil_details_apiGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned int *, int *))g_wil_details_apiGetFeatureVariant)(
                                                                                                     (unsigned int)this,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a5);
  return result;
}
