/*
 * XREFs of DefaultInitializeProfiling @ 0x1409A33E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
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
    qword_140C4AEF8 = (__int64)&qword_140C05468;
  }
  return KeAddProcessorAffinityEx(word_140C05480, Number);
}
