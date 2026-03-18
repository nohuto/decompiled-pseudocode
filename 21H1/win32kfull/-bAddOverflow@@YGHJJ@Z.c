/*
 * XREFs of ?bAddOverflow@@YGHJJ@Z @ 0x241428
 * Callers:
 *     ?lSizeDDA@@YGJPAU_PLGDDA@@@Z @ 0x244759 (-lSizeDDA@@YGJPAU_PLGDDA@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bAddOverflow(int a1)
{
  return a1 >= 0 && 0x7FFFFFFF - a1 < 4;
}
