/*
 * XREFs of MiDeletePartition @ 0x140533BDC
 * Callers:
 *     MmCreatePartition @ 0x1403C9FD4 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14090F8E0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408CA3FC (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
