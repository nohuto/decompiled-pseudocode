/*
 * XREFs of KiIsQosGroupingActive @ 0x140396524
 * Callers:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402ED0B0 (KiCheckPreferredHeteroProcessor.c)
 *     KeUpdateQosGroupingSets @ 0x1403964CC (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051A050 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051A8C8 (KiSelectProcessorToPreempt.c)
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
