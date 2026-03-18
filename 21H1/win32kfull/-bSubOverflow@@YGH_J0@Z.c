/*
 * XREFs of ?bSubOverflow@@YGH_J0@Z @ 0x2446D9
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall bSubOverflow(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a2) ^ HIDWORD(a1)) >= 0 )
    return 0;
  if ( a1 < 0 )
  {
    if ( a1 >= (__int64)(a2 + 0x8000000000000000uLL) )
      return 0;
  }
  else if ( a1 <= a2 + 0x7FFFFFFFFFFFFFFFLL )
  {
    return 0;
  }
  return 1;
}
