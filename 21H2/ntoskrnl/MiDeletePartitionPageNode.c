/*
 * XREFs of MiDeletePartitionPageNode @ 0x1405BDF38
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x1405BDDAC (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x1405BE614 (MiFreePartitionTree.c)
 *     MiHotAddPartitionMemory @ 0x140981BB0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
