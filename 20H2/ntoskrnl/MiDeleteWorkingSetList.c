/*
 * XREFs of MiDeleteWorkingSetList @ 0x140262EF8
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
