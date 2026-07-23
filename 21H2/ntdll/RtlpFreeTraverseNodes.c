/*
 * XREFs of RtlpFreeTraverseNodes @ 0x180058810
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180058730 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EED00 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
