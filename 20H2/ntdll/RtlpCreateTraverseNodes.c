/*
 * XREFs of RtlpCreateTraverseNodes @ 0x180047390
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800471C0 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EEEB0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpCalcAllocSize @ 0x180047404 (LdrpCalcAllocSize.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(_QWORD *a1)
{
  unsigned int v1; // ebx
  SIZE_T v3; // rax
  ULONG v4; // r9d
  PVOID Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
