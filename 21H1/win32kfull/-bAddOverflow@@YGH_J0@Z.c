/*
 * XREFs of ?bAddOverflow@@YGH_J0@Z @ 0x241442
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall bAddOverflow(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a2) ^ HIDWORD(a1)) < 0 )
    return 0;
  if ( a2 < 0 )
  {
    if ( SHIDWORD(a1) > (int)((0x8000000000000000uLL - a2) >> 32) )
      return 0;
    if ( SHIDWORD(a1) >= (int)((0x8000000000000000uLL - a2) >> 32) )
      return (unsigned int)a1 < -(int)a2;
    return 1;
  }
  if ( (int)((unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - a1) >> 32) > SHIDWORD(a2) )
    return 0;
  if ( (int)((unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - a1) >> 32) < SHIDWORD(a2) )
    return 1;
  return -1 - (int)a1 < (unsigned int)a2;
}
