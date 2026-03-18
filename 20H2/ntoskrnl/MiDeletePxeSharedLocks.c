/*
 * XREFs of MiDeletePxeSharedLocks @ 0x140262F2C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
