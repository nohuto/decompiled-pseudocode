/*
 * XREFs of ACPICMSleepButtonStart @ 0x1C00AE140
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C009058C (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMSleepButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, -2147483646);
}
