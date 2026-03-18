/*
 * XREFs of MiReplenishSlabAllocator @ 0x14038F374
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x14054D8E4 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x14038F3C8 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x140396BCC (MiInsertSlabEntry.c)
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
