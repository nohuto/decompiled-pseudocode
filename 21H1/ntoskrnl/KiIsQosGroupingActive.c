/*
 * XREFs of KiIsQosGroupingActive @ 0x140395954
 * Callers:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1403321F0 (KiCheckPreferredHeteroProcessor.c)
 *     KeUpdateQosGroupingSets @ 0x1403958FC (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x140519A00 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051A278 (KiSelectProcessorToPreempt.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  v0 = 1;
  if ( (KiHeteroSchedulerOptions & 1) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  if ( (KiVelocityFlags & 0x800) == 0 || !KeHeteroSystemQos )
    return 0;
  return v0;
}
