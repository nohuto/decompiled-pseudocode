/*
 * XREFs of _LXp_setn @ 0x1800BA3C0
 * Callers:
 *     _Stoldx @ 0x1800B1E14 (_Stoldx.c)
 * Callees:
 *     _LXp_setw @ 0x1800BA3E8 (_LXp_setw.c)
 */

__int64 __fastcall LXp_setn(__int64 a1, __int64 a2)
{
  LXp_setw(a1, a2);
  return a1;
}
