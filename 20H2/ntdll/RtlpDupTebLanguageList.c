/*
 * XREFs of RtlpDupTebLanguageList @ 0x1800F06F8
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EC40 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpFreeTebLanguageList @ 0x18006EE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078500 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180104878 (RtlpMuiRegDupLanguageConfigList.c)
 */

void **__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  void **Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap = (void *)v3) == 0LL)
    || a1[1] && (v4 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = (void *)v4) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
