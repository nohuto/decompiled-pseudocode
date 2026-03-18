/*
 * XREFs of MiDeleteWorkingSetList @ 0x1402D4D70
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140385D7C (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
