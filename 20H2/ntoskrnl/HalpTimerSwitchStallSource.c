/*
 * XREFs of HalpTimerSwitchStallSource @ 0x140385E90
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099870C (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
