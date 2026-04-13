/*
 * XREFs of _Feraise @ 0x1800CA0A8
 * Callers:
 *     _FXp_addh @ 0x1800B5E40 (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800B62B4 (_FXp_mulh.c)
 *     _Xp_addh @ 0x1800B6B38 (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800B6FC4 (_Xp_mulh.c)
 *     _LXp_addh @ 0x1800B768C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B7A5C (_LXp_mulh.c)
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
