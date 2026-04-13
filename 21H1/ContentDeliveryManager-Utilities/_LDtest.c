/*
 * XREFs of _LDtest @ 0x1800CA640
 * Callers:
 *     _LXp_addh @ 0x1800B768C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800B7A5C (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __cdecl LDtest(long double *a1)
{
  return Dtest(a1);
}
