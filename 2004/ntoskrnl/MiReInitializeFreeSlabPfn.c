/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x14037311C
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x140372E60 (MiFreePageToSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x14038FF38 (MiAllocateSlabEntry.c)
 *     MiGetSlabStandbyPage @ 0x14054DC2C (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( *(_DWORD *)(a2 + 48) || *(_DWORD *)(a2 + 52) != 2 )
    v3 = -1LL;
  else
    v3 = -2LL;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16), v4, v5, v6);
}
