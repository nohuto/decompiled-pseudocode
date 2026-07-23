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
  _WORD *Heap; // esi
  _DWORD *v1; // edx
  char *v2; // ecx
  SIZE_T v4; // [esp-4h] [ebp-Ch]
  ULONG *v5; // [esp+0h] [ebp-8h]
  PVOID BaseAddress; // [esp+4h] [ebp-4h] BYREF

  if ( pTblPtrs )
    return 1;
  LODWORD(v4) = 32;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v4);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, 0, v5) >= 0 )
    {
      v1 = (char *)BaseAddress + *((_DWORD *)BaseAddress + 4);
      v2 = (char *)v1 + *v1;
      *Heap = *((_WORD *)v2 + 12);
      Heap[2] = *((_WORD *)v2 + 11);
      Heap[1] = *((_WORD *)v2 + 16);
      Heap[14] = *((_WORD *)v2 + 13);
      *((_DWORD *)Heap + 2) = (char *)v1 + *((_DWORD *)v2 + 7);
      *((_DWORD *)Heap + 3) = (char *)v1 + *((_DWORD *)v2 + 9);
      *((_DWORD *)Heap + 4) = (char *)v1 + *((_DWORD *)v2 + 10);
      *((_DWORD *)Heap + 5) = (char *)v1 + *((_DWORD *)v2 + 14);
      if ( _InterlockedCompareExchange(&pTblPtrs, (signed __int32)Heap, 0) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
