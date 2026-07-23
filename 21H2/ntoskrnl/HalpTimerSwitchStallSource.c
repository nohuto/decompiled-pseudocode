/*
 * XREFs of HalpTimerSwitchStallSource @ 0x140386DD0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSwitchStallSource(char a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v3; // rdx

  if ( a1 )
  {
    HalpSavedStallCounter = HalpStallCounter;
    result = HalpOriginalStallTimer;
  }
  else
  {
    if ( HalpSavedStallCounter != HalpPerformanceCounter )
    {
      InternalData = HalpTimerGetInternalData(HalpSavedStallCounter);
      (*(void (__fastcall **)(__int64))(v3 + 104))(InternalData);
    }
    result = HalpSavedStallCounter;
    HalpSavedStallCounter = 0LL;
  }
  HalpStallCounter = result;
  return result;
}
