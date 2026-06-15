/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180064D60
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064C84 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

unsigned int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCurrentVariantState(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int (*v4)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax
  int v5; // edx
  int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v4 = g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant || (v4 = g_wil_details_apiGetFeatureVariant) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, int *, __int64))v4)(16046125LL, 1LL, &v12, &v10, a3);
  else
    v5 = 0;
  *a2 = 0;
  v6 = v5 & 0x100;
  v7 = ((v5 & 0x80) != 0 ? 0x200 : 0) | (v10 != 0 ? 0x100 : 0) | *a2 & 0xFFFF00FF;
  v8 = v5 & 0xFFFFFE7F;
  if ( v8 && (v7 |= (v8 & 0x3F) << 10, v6) )
    a2[1] = v12;
  else
    a2[1] = 5;
  *a2 = v7;
  return a2;
}
