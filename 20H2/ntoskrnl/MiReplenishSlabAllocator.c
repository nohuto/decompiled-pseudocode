/*
 * XREFs of MiReplenishSlabAllocator @ 0x1403923A4
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x1403923F8 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x140399C5C (MiInsertSlabEntry.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 64) < a3 )
  {
    result = MiAllocateSlabEntry(a1, a2, a4);
    if ( !result )
      return result;
    MiInsertSlabEntry(a2, a1, result);
  }
  return 1LL;
}
