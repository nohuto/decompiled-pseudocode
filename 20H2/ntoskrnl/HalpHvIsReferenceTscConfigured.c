/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A6E7C
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 *     HalpPostSleepMP @ 0x140998074 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A268 != 0;
}
