/*
 * XREFs of MiDeletePxeSharedLocks @ 0x140216DE8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePxeSharedLocks(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 592);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
