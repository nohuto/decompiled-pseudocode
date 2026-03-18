/*
 * XREFs of MiResumeFromHibernate @ 0x14037F6AC
 * Callers:
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14037F6CC (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
