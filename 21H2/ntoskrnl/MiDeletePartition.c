/*
 * XREFs of MiDeletePartition @ 0x14058DDC0
 * Callers:
 *     MmCreatePartition @ 0x1403D981C (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x1409B3490 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x14096C2FC (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
