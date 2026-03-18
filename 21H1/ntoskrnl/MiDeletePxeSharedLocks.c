/*
 * XREFs of MiDeletePxeSharedLocks @ 0x1402D4DA4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePxeSharedLocks(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 608);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
