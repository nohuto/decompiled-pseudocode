/*
 * XREFs of RtlpAddHeapToProtectedList @ 0x18000C1A0
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpAddHeapToProtectedList(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 result; // rax
  struct _PEB *v6; // rcx
  SIZE_T v7; // r8
  _QWORD *Heap; // rax

  v1 = RtlpNumberOfProtectedHeaps;
  v3 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 208LL;
  *(_WORD *)(v3 + a1) = -1;
  if ( v1 != RtlpMaxNumberOfProtectedHeaps )
  {
    v4 = RtlpProtectedHeapsList;
LABEL_5:
    result = v1;
    RtlpNumberOfProtectedHeaps = v1 + 1;
    v4[v1] = a1;
    return result;
  }
  v6 = NtCurrentPeb();
  v7 = 8LL * (unsigned __int16)(2 * RtlpMaxNumberOfProtectedHeaps);
  RtlpMaxNumberOfProtectedHeaps *= 2;
  Heap = RtlAllocateHeap(v6->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( Heap )
  {
    v1 = RtlpNumberOfProtectedHeaps;
    memmove(Heap, RtlpProtectedHeapsList, 8LL * (unsigned __int16)RtlpNumberOfProtectedHeaps);
    if ( RtlpProtectedHeapsList != &RtlpProtectedHeapsListBuffer )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpProtectedHeapsList);
      v1 = RtlpNumberOfProtectedHeaps;
    }
    RtlpProtectedHeapsList = v4;
    goto LABEL_5;
  }
  result = (unsigned __int16)RtlpNumberOfProtectedHeaps;
  RtlpMaxNumberOfProtectedHeaps = RtlpNumberOfProtectedHeaps;
  return result;
}
