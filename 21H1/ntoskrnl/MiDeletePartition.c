/*
 * XREFs of MiDeletePartition @ 0x14052FBBC
 * Callers:
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x140908A10 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408C326C (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
