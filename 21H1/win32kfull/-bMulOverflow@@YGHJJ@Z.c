/*
 * XREFs of ?bMulOverflow@@YGHJJ@Z @ 0x24351C
 * Callers:
 *     ?lSizeDDA@@YGJPAU_PLGDDA@@@Z @ 0x244759 (-lSizeDDA@@YGJPAU_PLGDDA@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bMulOverflow(int a1)
{
  BOOL result; // eax

  result = 0;
  if ( a1 )
  {
    if ( a1 >= 0 ? 0x7FFFFFFF / a1 < 8 : a1 < -268435456 )
      return 1;
  }
  return result;
}
