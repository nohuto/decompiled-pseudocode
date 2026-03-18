/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A42FC
 * Callers:
 *     HalpPostSleepMP @ 0x1409910C4 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A368 != 0;
}
