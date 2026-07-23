/*
 * XREFs of RtlpLoadNlsData @ 0x18007C7B4
 * Callers:
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003D120 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800FD1D0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007C890 (RtlGetLocaleFileMappingAddress.c)
 */

char RtlpLoadNlsData()
{
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x38uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, 0LL, v1) >= 0 )
    {
      v2 = (unsigned int *)((char *)BaseAddress + *((unsigned int *)BaseAddress + 4));
      v3 = (char *)v2 + *v2;
      *Heap = *((_WORD *)v3 + 12);
      Heap[2] = *((_WORD *)v3 + 11);
      Heap[1] = *((_WORD *)v3 + 16);
      Heap[24] = *((_WORD *)v3 + 13);
      *((_QWORD *)Heap + 1) = (char *)v2 + *((unsigned int *)v3 + 7);
      *((_QWORD *)Heap + 2) = (char *)v2 + *((unsigned int *)v3 + 9);
      *((_QWORD *)Heap + 3) = (char *)v2 + *((unsigned int *)v3 + 10);
      *((_QWORD *)Heap + 4) = (char *)v2 + *((unsigned int *)v3 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
