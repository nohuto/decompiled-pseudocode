/*
 * XREFs of RtlpFreeUserBlock @ 0x180020DDC
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpFreeUserBlockToHeap @ 0x180004484 (RtlpFreeUserBlockToHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A0C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A7B0 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A860 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A910 (RtlpLogHeapSubSegmentFreeCached.c)
 */

__int16 __fastcall RtlpFreeUserBlock(__int64 a1, __int64 *a2, ULONG a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  _DWORD *SharedData; // rax
  __int64 v13; // rdi
  PSLIST_ENTRY v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  ULONG v18; // r8d
  PSLIST_ENTRY v19; // rbp
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int64 v23; // [rsp+50h] [rbp+8h]

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = (volatile signed __int32 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v6 + 416) && (*(_BYTE *)(v6 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 352));
  }
  v9 = *(unsigned __int16 *)v8;
  if ( v9 <= *((_DWORD *)v8 + 5) || v9 <= *((_DWORD *)v8 + 4) >> *((_DWORD *)v8 + 6) )
  {
    v10 = 1LL << *((_BYTE *)a2 + 16);
    if ( v10 > 0xF0000 )
      v10 = 983040LL;
    v11 = v10 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v11);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v11, 16LL * *(unsigned __int16 *)(v5 + 36));
    RtlpInterlockedPushEntrySList(v8, a2, v11, a4);
    LOWORD(v14) = *((_WORD *)v8 + 15) + 1;
    *((_WORD *)v8 + 15) = (_WORD)v14;
  }
  else
  {
    v15 = 1LL << *((_BYTE *)a2 + 16);
    if ( v15 > 0xF0000 )
      v15 = 983040LL;
    v23 = v15 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2, a3);
    LODWORD(v14) = RtlGetCurrentServiceSessionId();
    v16 = 2147353472LL;
    if ( (_DWORD)v14 )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      v17 = (__int64)&v14[9].Next[34].Next + 6;
    }
    else
    {
      v17 = 2147353472LL;
    }
    if ( *(_BYTE *)v17 )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
        LOWORD(v14) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v23, 16LL * *(unsigned __int16 *)(v5 + 36));
    }
    _InterlockedDecrement(v8 + 4);
    if ( v9 )
    {
      v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v8);
      v19 = v14;
      if ( v14 )
      {
        v20 = 1LL << LOBYTE(v14[1].Next);
        if ( v20 > 0xF0000 )
          v20 = 983040LL;
        v21 = v20 + WORD1(v14[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v21);
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v14, v18);
        LODWORD(v14) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v14 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          v16 = (__int64)&v14[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v16 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v19, v21, 0LL);
            LOWORD(v14) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v19, v21, 0LL);
          }
        }
        _InterlockedDecrement(v8 + 4);
      }
    }
  }
  return (__int16)v14;
}
