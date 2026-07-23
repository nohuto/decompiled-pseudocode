/*
 * XREFs of RtlCompactHeap @ 0x1800F23B0
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800F8D5C (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x180006AE4 (RtlpHpHeapCompact.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpCoalesceHeap @ 0x1800F365C (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8D5C (RtlDebugCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  ULONG v4; // edx
  SIZE_T v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v9; // [rsp+20h] [rbp-18h]
  SIZE_T v10; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, Flags & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v5 = 0LL;
      v10 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v9 = 1;
      }
      v6 = RtlpCoalesceHeap((int)HeapHandle);
      if ( v6 )
      {
        v5 = 16LL * *(unsigned __int16 *)(v6 + 8);
        v10 = v5;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v7 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v7 + 40) > v5 )
          v5 = *(_QWORD *)(v7 + 40);
        v10 = v5;
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v8 = NtCurrentTeb();
        v8->LastErrorValue = RtlNtStatusToDosError(0);
        v5 = v10;
      }
      if ( v9 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v5;
    }
  }
}
