/*
 * XREFs of ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01E0710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  *a3 = *((float *)this + 14);
  return result;
}
