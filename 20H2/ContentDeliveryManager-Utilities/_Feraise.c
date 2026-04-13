/*
 * XREFs of _Feraise @ 0x1800CC2B8
 * Callers:
 *     _FXp_addh @ 0x1800B8050 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B84C4 (_FXp_mulh.c)
 *     _Xp_addh @ 0x1800B8D48 (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800B91D4 (_Xp_mulh.c)
 *     _LXp_addh @ 0x1800B989C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B9C6C (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
