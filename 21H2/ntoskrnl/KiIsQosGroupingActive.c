/*
 * XREFs of KiIsQosGroupingActive @ 0x140398FA4
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KeUpdateQosGroupingSets @ 0x140398F4C (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051FFB8 (KiSelectProcessorToPreempt.c)
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
