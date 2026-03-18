/*
 * XREFs of MiEndDpcGang @ 0x14055E9C8
 * Callers:
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1405321E4 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEndDpcGang(__int64 a1)
{
  PVOID *v1; // rdi
  PVOID *v3; // rcx

  v1 = (PVOID *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    if ( *v1 != (PVOID)(a1 + 24) )
    {
      ExFreePoolWithTag(*v1, 0);
      *v1 = 0LL;
    }
  }
  else
  {
    v3 = *(PVOID **)(a1 + 8);
    if ( v3 != v1 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
