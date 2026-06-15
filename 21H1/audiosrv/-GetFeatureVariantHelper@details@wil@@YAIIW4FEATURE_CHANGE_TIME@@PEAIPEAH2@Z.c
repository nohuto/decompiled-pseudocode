/*
 * XREFs of ?GetFeatureVariantHelper@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180069000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UINT32 __fastcall wil::details::GetFeatureVariantHelper(
        wil::details *this,
        FEATURE_CHANGE_TIME a2,
        UINT32 *a3,
        BOOL *a4,
        int *a5,
        int *a6)
{
  *a5 = 1;
  return GetFeatureVariant((UINT32)this, a2, a3, a4);
}
