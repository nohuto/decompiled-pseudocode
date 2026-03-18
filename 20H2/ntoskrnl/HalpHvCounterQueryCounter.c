/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14038DD40
 * Callers:
 *     HalpHvTimerArm @ 0x14038DCB0 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
