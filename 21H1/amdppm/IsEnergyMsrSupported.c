/*
 * XREFs of IsEnergyMsrSupported @ 0x1C001EBE0
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001EA50 (InitEnergyCountersOnCurrentProcessor.c)
 * Callees:
 *     <none>
 */

char IsEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029A);
  return 1;
}
