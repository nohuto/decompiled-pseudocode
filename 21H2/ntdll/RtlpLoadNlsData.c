/*
 * XREFs of RtlpLoadNlsData @ 0x18007D154
 * Callers:
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003D0E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800FD070 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007D230 (RtlGetLocaleFileMappingAddress.c)
 */

char RtlpLoadNlsData()
{
  __int64 Heap; // rbx
  unsigned int *v1; // rdx
  char *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 56LL);
  if ( Heap )
  {
    if ( (int)RtlGetLocaleFileMappingAddress(&v4, &gSystemLocale, 0LL) >= 0 )
    {
      v1 = (unsigned int *)(v4 + *(unsigned int *)(v4 + 16));
      v2 = (char *)v1 + *v1;
      *(_WORD *)Heap = *((_WORD *)v2 + 12);
      *(_WORD *)(Heap + 4) = *((_WORD *)v2 + 11);
      *(_WORD *)(Heap + 2) = *((_WORD *)v2 + 16);
      *(_WORD *)(Heap + 48) = *((_WORD *)v2 + 13);
      *(_QWORD *)(Heap + 8) = (char *)v1 + *((unsigned int *)v2 + 7);
      *(_QWORD *)(Heap + 16) = (char *)v1 + *((unsigned int *)v2 + 9);
      *(_QWORD *)(Heap + 24) = (char *)v1 + *((unsigned int *)v2 + 10);
      *(_QWORD *)(Heap + 32) = (char *)v1 + *((unsigned int *)v2 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, Heap, 0LL) )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
