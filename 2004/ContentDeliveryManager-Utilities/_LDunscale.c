/*
 * XREFs of _LDunscale @ 0x1800CCCB8
 * Callers:
 *     _LXp_addh @ 0x1800B9CEC (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800BA0BC (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800BA3E8 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDunscale(_WORD *a1, unsigned __int16 *a2)
{
  return Dunscale(a1, a2);
}
