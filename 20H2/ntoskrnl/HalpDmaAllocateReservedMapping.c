/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140A648AC
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140A64788 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8FA94 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     MmAllocateMappingAddress @ 0x1406CF8C0 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMapping(__int64 a1)
{
  __int64 v1; // rbx
  PVOID MappingAddress; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = HalpMmAllocCtxAlloc(a1, 48LL);
  if ( v1 )
  {
    MappingAddress = MmAllocateMappingAddress(0x200000uLL, 0x206C6148u);
    *(_QWORD *)(v1 + 16) = MappingAddress;
    if ( MappingAddress )
    {
      *(_DWORD *)(v1 + 24) = 0;
      result = v1;
      *(_DWORD *)(v1 + 28) = 0;
      *(_QWORD *)(v1 + 32) = 0LL;
      return result;
    }
    HalpMmAllocCtxFree(v3, v1);
  }
  return 0LL;
}
