/*
 * XREFs of HalpTimerMarkSleep @ 0x14039154C
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 * Callees:
 *     <none>
 */

unsigned int HalpTimerMarkSleep()
{
  unsigned int result; // eax

  HalpTscOnWake = 0LL;
  result = KeGetPcr()->Prcb.Number;
  if ( !result )
  {
    result = HalpTimerSavedProcessorCounter;
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  }
  return result;
}
