/*
 * XREFs of DefaultOverflowHandler @ 0x1404B9850
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x1404CFA20 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x1405166D0 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
