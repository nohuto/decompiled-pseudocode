/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800FDC5C
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800FE778 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FE864 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // rax
  _QWORD *v9; // rcx
  signed __int64 result; // rax

  v5 = *(_WORD *)(a1 + 18) & 0xF;
  v6 = 0;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18016BBC8 + 8 * v5), a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = *(_QWORD **)(a1 + 8), *v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    v6 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_18016BA48);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18016BBC8 + 8 * v5));
  if ( v6 )
    return RtlFreeHeap(qword_18016BBD0, 0, a1);
  return result;
}
