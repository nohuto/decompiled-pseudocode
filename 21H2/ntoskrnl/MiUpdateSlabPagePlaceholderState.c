/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x140375478
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x140299420 (MiGetPageFromSlabAllocator.c)
 *     MiFreePageToSlabAllocator @ 0x140375280 (MiFreePageToSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1403929B8 (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x140552E10 (MiFreeSlabEntry.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     VslSetPlaceholderPages @ 0x140394EC8 (VslSetPlaceholderPages.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // rcx

  if ( !*(_DWORD *)(a1 + 48) )
  {
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v9 = 48 * a2 - 0x58000000000LL;
        *(_QWORD *)(v9 + 40) = *(_QWORD *)(v9 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
        MiAbortCombineScan(v9, 0x3000000000000000LL, 1LL);
      }
      v8 = 0;
      v7 = *((_DWORD *)MiSlabProtectionToPageProtection + *(int *)(a1 + 52));
    }
    else
    {
      if ( a3 == 1 )
        *(_QWORD *)(48 * a2 - 0x58000000000LL + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      v7 = 0;
      v8 = *((_DWORD *)MiSlabProtectionToPageProtection + *(int *)(a1 + 52));
    }
    if ( (MiFlags & 0x8000) != 0 && (int)VslSetPlaceholderPages(a2, a3, v8, v7) < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, a2, v8, v7);
  }
}
