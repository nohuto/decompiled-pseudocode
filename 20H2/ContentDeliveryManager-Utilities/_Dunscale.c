/*
 * XREFs of _Dunscale @ 0x1800CC7B0
 * Callers:
 *     _Xp_addh @ 0x1800B8D48 (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800B91D4 (_Xp_mulh.c)
 *     _Xp_setw @ 0x1800B9500 (_Xp_setw.c)
 *     _LDunscale @ 0x1800CC868 (_LDunscale.c)
 * Callees:
 *     _Dnorm @ 0x1800CC4A8 (_Dnorm.c)
 */

__int64 __fastcall Dunscale(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // ax
  __int64 result; // rax

  v3 = (a2[3] >> 4) & 0x7FF;
  if ( v3 == 2047 )
  {
    *a1 = 0;
    if ( (a2[3] & 0xF) != 0 )
      return 2LL;
    if ( a2[2] )
      return 2LL;
    if ( a2[1] )
      return 2LL;
    result = 1LL;
    if ( *a2 )
      return 2LL;
  }
  else if ( v3 || (v3 = Dnorm(a2), v3 <= 0) )
  {
    a2[3] &= 0xBFEFu;
    a2[3] |= 0x3FE0u;
    *a1 = v3 - 1022;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = 0;
    return 0LL;
  }
  return result;
}
