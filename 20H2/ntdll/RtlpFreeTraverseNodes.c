/*
 * XREFs of RtlpFreeTraverseNodes @ 0x1800472A0
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800471C0 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EEEB0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
