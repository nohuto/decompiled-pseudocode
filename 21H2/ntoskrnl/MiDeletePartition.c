/*
 * XREFs of MiDeletePartition @ 0x14053591C
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14090D1F0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408C7D1C (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
