/*
 * XREFs of MiResumeFromHibernate @ 0x14038A288
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14038A2A8 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
