/*
 * XREFs of MiUseSlabAllocatorForDriverPage @ 0x1402990A4
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocatorForDriverPage(__int64 a1, int a2, _DWORD *a3)
{
  if ( (MiFlags & 0x10000) != 0 && (*(_BYTE *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    *a3 = 0;
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 && a2 )
  {
    *a3 = 1;
    return 1LL;
  }
  return 0LL;
}
