/*
 * XREFs of _LXp_setn @ 0x1800B9F70
 * Callers:
 *     _Stoldx @ 0x1800B19C4 (_Stoldx.c)
 * Callees:
 *     _LXp_setw @ 0x1800B9F98 (_LXp_setw.c)
 */

__int64 __fastcall LXp_setn(__int64 a1, __int64 a2)
{
  LXp_setw(a1, a2);
  return a1;
}
