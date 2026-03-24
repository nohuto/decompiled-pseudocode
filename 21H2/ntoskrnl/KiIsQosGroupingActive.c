/*
 * XREFs of KiIsQosGroupingActive @ 0x140398E54
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140258C00 (KiCheckPreferredHeteroProcessor.c)
 *     KeUpdateQosGroupingSets @ 0x140398DFC (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F500 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051FD78 (KiSelectProcessorToPreempt.c)
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
