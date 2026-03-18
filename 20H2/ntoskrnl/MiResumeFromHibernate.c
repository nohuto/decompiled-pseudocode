/*
 * XREFs of MiResumeFromHibernate @ 0x140386074
 * Callers:
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140386094 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
