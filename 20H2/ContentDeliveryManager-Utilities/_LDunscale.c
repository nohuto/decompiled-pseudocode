/*
 * XREFs of _LDunscale @ 0x1800CC868
 * Callers:
 *     _LXp_addh @ 0x1800B989C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B9C6C (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800B9F98 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDunscale(_WORD *a1, unsigned __int16 *a2)
{
  return Dunscale(a1, a2);
}
