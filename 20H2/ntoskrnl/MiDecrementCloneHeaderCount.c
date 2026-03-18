/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x1405584F0
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x140558524 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x1408DBF28 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2136), 0, 0);
  return v1;
}
