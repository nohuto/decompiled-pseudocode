/*
 * XREFs of sub_180068CC0 @ 0x180068CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UINT32 __fastcall sub_180068CC0(UINT32 a1, FEATURE_CHANGE_TIME a2, UINT32 *a3, BOOL *a4, _DWORD *a5)
{
  *a5 = 1;
  return GetFeatureVariant(a1, a2, a3, a4);
}
