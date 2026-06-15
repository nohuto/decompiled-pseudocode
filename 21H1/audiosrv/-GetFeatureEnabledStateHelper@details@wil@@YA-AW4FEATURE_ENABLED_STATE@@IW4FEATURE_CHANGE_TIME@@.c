/*
 * XREFs of ?GetFeatureEnabledStateHelper@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800468F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

enum FEATURE_ENABLED_STATE __fastcall wil::details::GetFeatureEnabledStateHelper(
        wil::details *this,
        FEATURE_CHANGE_TIME a2,
        _DWORD *a3,
        int *a4)
{
  *a3 = 1;
  return GetFeatureEnabledState((UINT32)this, a2);
}
