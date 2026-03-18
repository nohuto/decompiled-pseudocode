/*
 * XREFs of ?bMulOverflow@@YGH_J0@Z @ 0x24356D
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

BOOL __stdcall bMulOverflow(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax

  if ( !a1 || !a2 )
    return 0;
  if ( (HIDWORD(a2) ^ HIDWORD(a1)) >= 0 )
  {
    if ( a1 <= 0 )
    {
      if ( __PAIR64__(a1, HIDWORD(a1)) == 0x80000000 || a2 == 0x8000000000000000uLL )
        return 1;
      return (int)((unsigned __int64)((__int64)0x8000000000000001uLL / a1) >> 32) <= (int)((unsigned __int64)-a2 >> 32);
    }
    else
    {
      return (int)((unsigned __int64)(0x7FFFFFFFFFFFFFFFLL / a1) >> 32) <= SHIDWORD(a2);
    }
  }
  if ( a1 < 0 )
  {
    v2 = (__int64)0x8000000000000000uLL / a2;
    if ( SHIDWORD(a1) > (int)((unsigned __int64)((__int64)0x8000000000000000uLL / a2) >> 32) )
      return 0;
    if ( SHIDWORD(a1) >= SHIDWORD(v2) )
      return (unsigned int)a1 < (unsigned int)v2;
    return 1;
  }
  v4 = (__int64)0x8000000000000000uLL / a1;
  if ( SHIDWORD(a2) > (int)((unsigned __int64)((__int64)0x8000000000000000uLL / a1) >> 32) )
    return 0;
  if ( SHIDWORD(a2) < SHIDWORD(v4) )
    return 1;
  return (unsigned int)a2 < (unsigned int)v4;
}
