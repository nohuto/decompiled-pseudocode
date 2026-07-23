/*
 * XREFs of DefaultInitializeProfiling @ 0x1409A7F80
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 */

__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    qword_140C054E8 = (__int64)&DefaultProfileSourceDescriptorListHead;
    qword_140C054F0 = (__int64)&DefaultProfileSourceDescriptorListHead;
    DefaultProfileSourceDescriptorListHead = (__int64)&qword_140C054E8;
    qword_140C4AFB8 = (__int64)&qword_140C054E8;
  }
  return KeAddProcessorAffinityEx(word_140C05500, Number);
}
