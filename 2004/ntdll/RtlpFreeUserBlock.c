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
 *     RtlpInterlockedPopEntrySList @ 0x1800A09A0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09E0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A2A0 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A350 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A400 (RtlpLogHeapSubSegmentFreeCached.c)
 */

__int16 __fastcall RtlpFreeUserBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  _DWORD *SharedData; // rax
  __int64 v12; // rdi
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // r8d
  PSLIST_ENTRY v20; // rbp
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v26; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a1 + 24);
  v7 = (volatile signed __int32 *)(a1 + 48 * (*(unsigned __int8 *)(a2 + 16) - 5LL));
  if ( *(_WORD *)(v5 + 416) && (*(_BYTE *)(v5 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v5 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v5 + 352));
  }
  v8 = *(unsigned __int16 *)v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *(unsigned __int16 *)(a2 + 18);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v10);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v4 + 36));
    RtlpInterlockedPushEntrySList(v7, a2);
    LOWORD(v13) = *((_WORD *)v7 + 15) + 1;
    *((_WORD *)v7 + 15) = (_WORD)v13;
  }
  else
  {
    v14 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v26 = v14 + *(unsigned __int16 *)(a2 + 18);
    RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), a2, a3);
    LODWORD(v13) = RtlGetCurrentServiceSessionId(v16, v15);
    v17 = 2147353472LL;
    if ( (_DWORD)v13 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      v18 = (__int64)&v13[9].Next[34].Next + 6;
    }
    else
    {
      v18 = 2147353472LL;
    }
    if ( *(_BYTE *)v18 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
        LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v26, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement(v7 + 4);
    if ( v8 )
    {
      v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v20 = v13;
      if ( v13 )
      {
        v21 = 1LL << LOBYTE(v13[1].Next);
        if ( v21 > 0xF0000 )
          v21 = 983040LL;
        v22 = v21 + WORD1(v13[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v22);
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), (__int64)v13, v19);
        LODWORD(v13) = RtlGetCurrentServiceSessionId(v24, v23);
        if ( (_DWORD)v13 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          v17 = (__int64)&v13[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v17 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v20, v22, 0LL);
            LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v20, v22, 0LL);
          }
        }
        _InterlockedDecrement(v7 + 4);
      }
    }
  }
  return (__int16)v13;
}
