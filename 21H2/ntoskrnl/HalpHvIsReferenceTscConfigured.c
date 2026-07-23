/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A788C
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A1C8 != 0;
}
