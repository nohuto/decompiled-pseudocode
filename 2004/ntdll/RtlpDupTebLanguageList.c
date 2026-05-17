/*
 * XREFs of RtlpDupTebLanguageList @ 0x1800F01E8
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EBF0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpFreeTebLanguageList @ 0x18006ED8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078400 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180104368 (RtlpMuiRegDupLanguageConfigList.c)
 */

__int64 *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 *Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap = v3) == 0)
    || a1[1] && (v4 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = v4) == 0) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
