/*
 * XREFs of HalpTimerStallCounterPowerChange @ 0x1404C04C0
 * Callers:
 *     HalpTimerPowerChange @ 0x1404C02D4 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022AA30 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpTimerStallCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  ULONG_PTR v2; // rbx
  int v3; // eax
  __int64 InternalData; // rax

  v2 = HalpSavedStallCounter;
  LOBYTE(v3) = a2;
  if ( HalpSavedStallCounter )
  {
    if ( BugCheckParameter3 == HalpSavedStallCounter && a2 )
    {
      if ( HalpSavedStallCounter != HalpPerformanceCounter )
      {
        InternalData = HalpTimerGetInternalData(HalpSavedStallCounter);
        v3 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
        if ( v3 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v2, v3);
      }
      HalpSavedStallCounter = 0LL;
      HalpStallCounter = v2;
    }
  }
  else if ( BugCheckParameter3 == HalpStallCounter && !a2 )
  {
    LOBYTE(v3) = HalpAlwaysOnCounter;
    if ( !HalpAlwaysOnCounter )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
    HalpSavedStallCounter = HalpStallCounter;
    HalpStallCounter = HalpAlwaysOnCounter;
  }
  return v3;
}
