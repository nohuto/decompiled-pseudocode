/*
 * XREFs of MiResumeFromHibernate @ 0x140383F44
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140383F64 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
