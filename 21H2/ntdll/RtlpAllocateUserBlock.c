/*
 * XREFs of RtlpAllocateUserBlock @ 0x180020A20
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A1210 (RtlpInterlockedPopEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A650 (RtlpLogHeapSubSegmentAllocCached.c)
 */

__int64 __fastcall RtlpAllocateUserBlock(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 UserBlockFromHeap; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int32 v17; // eax
  unsigned __int32 v18; // eax

  v4 = a2;
  v8 = a2;
  v9 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v9 + 28);
  UserBlockFromHeap = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( UserBlockFromHeap )
  {
    ++*(_WORD *)(v9 + 32);
LABEL_3:
    v12 = 1LL << *(_BYTE *)(UserBlockFromHeap + 16);
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v13 = v12 + *(unsigned __int16 *)(UserBlockFromHeap + 18);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(983040LL, v10) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), UserBlockFromHeap, v13, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v13);
    goto LABEL_9;
  }
  if ( (unsigned __int8)v4 > 7u )
  {
    UserBlockFromHeap = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v4 - 6)));
    if ( UserBlockFromHeap )
      goto LABEL_3;
  }
  UserBlockFromHeap = RtlpAllocateUserBlockFromHeap(*(_QWORD *)(a1 + 24), v4, a3, a4);
  if ( UserBlockFromHeap )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 48 * v8 - 224), 1u);
LABEL_9:
  v15 = *(unsigned __int16 *)(v9 + 28);
  if ( v15 > 0x40 )
  {
    if ( v15 < *(unsigned __int16 *)(v9 + 30) + (*(unsigned __int16 *)(v9 + 30) >> 1)
      && *(unsigned __int16 *)(v9 + 32) < v15 - (v15 >> 1) )
    {
      v17 = *(_DWORD *)(v9 + 20);
      if ( v17 >= 2 )
      {
        v18 = *(_DWORD *)(v9 + 24);
        if ( v18 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), v18 - 1, v18);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 20), v17 + 1, v17);
      }
    }
    *(_WORD *)(v9 + 28) = 0;
    *(_WORD *)(v9 + 30) = 0;
    *(_WORD *)(v9 + 32) = 0;
  }
  return UserBlockFromHeap;
}
