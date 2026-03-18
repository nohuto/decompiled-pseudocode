/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x140554B20
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x140554B54 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x1408D60E8 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2136), 0, 0);
  return v1;
}
