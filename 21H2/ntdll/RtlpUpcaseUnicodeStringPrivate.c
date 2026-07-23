/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1800FBC70
 * Callers:
 *     RtlIsNameInExpression @ 0x1800FB560 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB610 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID Heap; // rax
  unsigned int v6; // r10d
  unsigned int v8; // r11d
  unsigned __int16 v9; // ax
  __int64 v10; // r9
  int v11; // r10d

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_QWORD *)(a1 + 8) = Heap;
  v6 = 0;
  if ( !Heap )
    return 3221225495LL;
  v8 = *a2 >> 1;
  while ( v6 < v8 )
  {
    v9 = NLS_UPCASE(*(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v10) = v9;
    v6 = v11 + 1;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
