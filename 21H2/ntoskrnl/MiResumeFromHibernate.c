/*
 * XREFs of MiResumeFromHibernate @ 0x1403841D0
 * Callers:
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x1403841F0 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
