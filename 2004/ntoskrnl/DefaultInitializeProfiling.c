/*
 * XREFs of DefaultInitializeProfiling @ 0x1409A4220
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    qword_140C05468 = (__int64)&DefaultProfileSourceDescriptorListHead;
    qword_140C05470 = (__int64)&DefaultProfileSourceDescriptorListHead;
    DefaultProfileSourceDescriptorListHead = (__int64)&qword_140C05468;
    qword_140C4AD98 = (__int64)&qword_140C05468;
  }
  return KeAddProcessorAffinityEx(word_140C05480, Number);
}
