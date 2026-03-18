/*
 * XREFs of _KillSystemTimer @ 0x1C01EABC0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 */

__int64 __fastcall KillSystemTimer(__int64 a1, __int64 a2)
{
  return FindTimer(a1, a2, 2u, 1, 0LL);
}
