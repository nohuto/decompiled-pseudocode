/*
 * XREFs of DefaultOverflowHandler @ 0x1404B9170
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x1404CF570 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x140516080 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
