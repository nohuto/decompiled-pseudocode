/*
 * XREFs of KiIsQosGroupingActive @ 0x1403989E4
 * Callers:
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402DBC60 (KiCheckPreferredHeteroProcessor.c)
 *     KeUpdateQosGroupingSets @ 0x14039898C (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051DA20 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051E298 (KiSelectProcessorToPreempt.c)
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
