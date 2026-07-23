/*
 * XREFs of _RtlpFreeTraverseNodes@4 @ 0x4B2AA053
 * Callers:
 *     _RtlpIsQualifiedLanguage@12 @ 0x4B2A9F90 (_RtlpIsQualifiedLanguage@12.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __thiscall RtlpFreeTraverseNodes(PVOID BaseAddress)
{
  int v1; // esi

  v1 = 0;
  if ( !BaseAddress )
    return -1073741811;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v1;
}
