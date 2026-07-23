/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x14055A200
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x14055A234 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x1408D9848 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2136), 0, 0);
  return v1;
}
