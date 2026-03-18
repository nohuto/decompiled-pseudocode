/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14039B0E0
 * Callers:
 *     HalpHvTimerArm @ 0x14039B050 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
