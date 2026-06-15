/*
 * XREFs of sub_180046C10 @ 0x180046C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FEATURE_ENABLED_STATE __fastcall sub_180046C10(UINT32 a1, FEATURE_CHANGE_TIME a2, _DWORD *a3)
{
  *a3 = 1;
  return GetFeatureEnabledState(a1, a2);
}
