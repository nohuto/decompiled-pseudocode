/*
 * XREFs of PpmCheckReset @ 0x1403CAD40
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403A2974 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1, __int64 a2)
{
  PpmResetPerfTimes(a1 + 33128, a2);
  return 0LL;
}
