/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403B6968
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4C488 != 0;
}
