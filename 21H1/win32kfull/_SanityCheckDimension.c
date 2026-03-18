/*
 * XREFs of _SanityCheckDimension @ 0x1BAE20
 * Callers:
 *     _HT_HalftoneBitmap@24 @ 0x1BAB42 (_HT_HalftoneBitmap@24.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall SanityCheckDimension(int a1, int a2)
{
  int v2; // eax

  if ( !gbCheckLimits )
    return 1;
  if ( a1 > a2 )
  {
    v2 = a1;
    a1 = a2;
    a2 = v2;
  }
  return a2 - a1 <= (unsigned int)gdwMaxSurfaceSize;
}
