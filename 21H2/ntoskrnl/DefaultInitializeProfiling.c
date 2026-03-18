/*
 * XREFs of DefaultInitializeProfiling @ 0x140A61A60
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    HalpProfileSourceDescriptorListLock = 0LL;
    HalpNumberOfGpCounters = 0;
    HalpProfileIntervalLimits = (__int64)DefaultProfileIntervalLimits;
    qword_140C08A98 = (__int64)&HalpProfileSourceDescriptorListHead;
    qword_140C08AA0 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&qword_140C08A98;
    qword_140C4D0C8 = (__int64)&qword_140C08A98;
    DefaultCounterStatusPtr = (__int64)&DefaultCounterStatus;
    HalpCounterStatus = (__int64)&DefaultCounterStatusPtr;
    HalpProfileSourceDescriptorCount = 1;
    HalpNumberOfFixedCounters = 1;
    HalpNumberOfCounters = 1;
    dword_140C4C1D8 = 3;
  }
  return KeAddProcessorAffinityEx(word_140C08AB0, Number);
}
