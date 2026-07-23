/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x14037553C
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x140375280 (MiFreePageToSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1403929B8 (MiAllocateSlabEntry.c)
 *     MiGetSlabStandbyPage @ 0x14055330C (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a2 + 48) || *(_DWORD *)(a2 + 52) != 2 )
    v3 = -1LL;
  else
    v3 = -2LL;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
}
