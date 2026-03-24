/*
 * XREFs of MiDeletePartition @ 0x1405356DC
 * Callers:
 *     MmCreatePartition @ 0x1403CA974 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14090D090 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14056209C (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408C7BBC (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
