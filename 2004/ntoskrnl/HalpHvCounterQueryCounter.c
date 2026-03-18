/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14038B880
 * Callers:
 *     HalpHvTimerArm @ 0x14038B7F0 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi();
  else
    return __readmsr(0x40000020u);
}
