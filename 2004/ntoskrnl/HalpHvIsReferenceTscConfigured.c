/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A4A5C
 * Callers:
 *     HalpPostSleepMP @ 0x140992004 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A208 != 0;
}
