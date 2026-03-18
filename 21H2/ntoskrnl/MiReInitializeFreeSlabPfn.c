/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x14023C030
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x14023BE50 (MiFreePageToSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 *     MiGetSlabStandbyPage @ 0x1405B130C (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 */

__int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  *(_QWORD *)(a1 + 8) = (*(_DWORD *)(a2 + 48) != 2) - 2LL;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1LL);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return MiSetOriginalPtePfnFromFreeList(a1 + 16, v3, v4);
}
