/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14038AD10
 * Callers:
 *     HalpHvTimerArm @ 0x14038AC80 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi();
  else
    return __readmsr(0x40000020u);
}
