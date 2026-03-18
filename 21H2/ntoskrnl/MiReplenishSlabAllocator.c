/*
 * XREFs of MiReplenishSlabAllocator @ 0x1405B1974
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 */

unsigned __int64 __fastcall MiReplenishSlabAllocator(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 32) < a3 )
  {
    result = (unsigned __int64)MiAllocateSlabEntry(a1, a2, a4);
    if ( !result )
      return result;
    MiInsertSlabEntry(a2, a1, result);
  }
  return 1LL;
}
