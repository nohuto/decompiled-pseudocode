/*
 * XREFs of ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C01466E4
 * Callers:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C01494DC (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiInternal::operator>=(_DWORD *a1, _DWORD *a2)
{
  return *a1 >= *a2 && a1[1] >= a2[1];
}
