/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14038E400
 * Callers:
 *     HalpHvTimerArm @ 0x14038E370 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
