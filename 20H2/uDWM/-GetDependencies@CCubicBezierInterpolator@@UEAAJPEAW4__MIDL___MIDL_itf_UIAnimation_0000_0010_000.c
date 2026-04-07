/*
 * XREFs of ?GetDependencies@CCubicBezierInterpolator@@UEAAJPEAW4__MIDL___MIDL_itf_UIAnimation_0000_0010_0001@@00@Z @ 0x1800432B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::GetDependencies(
        CCubicBezierInterpolator *this,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0010_0001 *a2,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0010_0001 *a3,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0010_0001 *a4)
{
  *a2 = UI_ANIMATION_DEPENDENCY_FINAL_VALUE|UI_ANIMATION_DEPENDENCY_INTERMEDIATE_VALUES;
  *a3 = UI_ANIMATION_DEPENDENCY_NONE;
  *a4 = UI_ANIMATION_DEPENDENCY_FINAL_VALUE|UI_ANIMATION_DEPENDENCY_INTERMEDIATE_VALUES;
  return 0LL;
}
