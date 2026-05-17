/*
 * XREFs of _RtlpLoadNlsData@0 @ 0x4B2EA1FB
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlGetLocaleFileMappingAddress@12 @ 0x4B2EA2B0 (_RtlGetLocaleFileMappingAddress@12.c)
 */

char __stdcall RtlpLoadNlsData()
{
  int Heap; // esi
  _DWORD *v1; // edx
  char *v2; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 32);
  if ( Heap )
  {
    if ( (int)RtlGetLocaleFileMappingAddress(&v4, &gSystemLocale, 0) >= 0 )
    {
      v1 = (_DWORD *)(v4 + *(_DWORD *)(v4 + 16));
      v2 = (char *)v1 + *v1;
      *(_WORD *)Heap = *((_WORD *)v2 + 12);
      *(_WORD *)(Heap + 4) = *((_WORD *)v2 + 11);
      *(_WORD *)(Heap + 2) = *((_WORD *)v2 + 16);
      *(_WORD *)(Heap + 28) = *((_WORD *)v2 + 13);
      *(_DWORD *)(Heap + 8) = (char *)v1 + *((_DWORD *)v2 + 7);
      *(_DWORD *)(Heap + 12) = (char *)v1 + *((_DWORD *)v2 + 9);
      *(_DWORD *)(Heap + 16) = (char *)v1 + *((_DWORD *)v2 + 10);
      *(_DWORD *)(Heap + 20) = (char *)v1 + *((_DWORD *)v2 + 14);
      if ( _InterlockedCompareExchange(&pTblPtrs, Heap, 0) )
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
