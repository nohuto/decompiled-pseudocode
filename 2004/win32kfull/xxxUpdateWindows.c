/*
 * XREFs of xxxUpdateWindows @ 0x1C02431D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateThreadsWindows @ 0x1C0213ACC (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxUpdateWindows(__int64 a1, HRGN a2)
{
  xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  return 1LL;
}
