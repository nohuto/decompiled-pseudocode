/*
 * XREFs of MiReplenishSlabAllocator @ 0x140392814
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x1405533D4 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x140392868 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x14039A0CC (MiInsertSlabEntry.c)
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
