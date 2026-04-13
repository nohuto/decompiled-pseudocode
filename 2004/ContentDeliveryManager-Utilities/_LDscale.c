/*
 * XREFs of _LDscale @ 0x1800B9CE0
 * Callers:
 *     _Stoldx @ 0x1800B1E14 (_Stoldx.c)
 *     _LXp_addh @ 0x1800B9CEC (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800BA0BC (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800BA3E8 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
