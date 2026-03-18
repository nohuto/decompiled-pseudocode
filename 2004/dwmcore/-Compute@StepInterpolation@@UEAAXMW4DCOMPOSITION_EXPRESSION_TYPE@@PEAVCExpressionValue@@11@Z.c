/*
 * XREFs of ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180029820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StepInterpolation::Compute(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  return KeyframeInterpolation::Interpolate(a1, (unsigned int)(int)(float)(a2 / *(float *)(a1 + 44)), a3, a4);
}
