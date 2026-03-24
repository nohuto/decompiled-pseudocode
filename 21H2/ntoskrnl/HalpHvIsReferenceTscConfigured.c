/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A773C
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 *     HalpPostSleepMP @ 0x140995864 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A188 != 0;
}
