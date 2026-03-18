/*
 * XREFs of MiDeletePartition @ 0x14053020C
 * Callers:
 *     MmCreatePartition @ 0x1403C7394 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x140909CC0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408C45BC (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
