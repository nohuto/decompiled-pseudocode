/*
 * XREFs of ?GetFinalValue@CCubicBezierInterpolator@@UEAAJPEANI@Z @ 0x1800AB5F0
 * Callers:
 *     ?InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z @ 0x1800AB8B0 (-InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::GetFinalValue(CCubicBezierInterpolator *this, double *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10

  result = 2147500037LL;
  if ( *((_QWORD *)this + 3) )
  {
    if ( a3 )
    {
      v4 = 0LL;
      v5 = a3;
      do
      {
        a2[v4] = *(double *)(v4 * 8 + *((_QWORD *)this + 3));
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    return 0LL;
  }
  return result;
}
