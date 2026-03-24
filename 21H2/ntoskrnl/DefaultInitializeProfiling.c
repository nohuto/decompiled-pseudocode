/*
 * XREFs of DefaultInitializeProfiling @ 0x1409A7050
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    qword_140C054D8 = (__int64)&DefaultProfileSourceDescriptorListHead;
    qword_140C054E0 = (__int64)&DefaultProfileSourceDescriptorListHead;
    DefaultProfileSourceDescriptorListHead = (__int64)&qword_140C054D8;
    qword_140C4AF78 = (__int64)&qword_140C054D8;
  }
  return KeAddProcessorAffinityEx(word_140C054F0, Number);
}
