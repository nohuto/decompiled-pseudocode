/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1800069A0
 * Callers:
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rsi
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  __int16 v14; // dx
  int v15; // ebx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v10 = (_BYTE *)(v7 + 56);
    v11 = v5 - 2;
    do
    {
      *v10 &= ~1u;
      v10 += 32;
      --v11;
    }
    while ( v11 );
  }
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v12 = *(unsigned __int8 *)(a2 + 31);
  v13 = *(_DWORD *)(a2 + 28);
  LOBYTE(v21) = -1;
  v14 = ~(_WORD)v13;
  if ( v12 == v5 )
  {
    LOWORD(v15) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v15 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v15;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v14 - v15);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v16 = RtlpHpSegPageRangeCoalesce(a1, (__int64)&v21);
  v17 = (__int64 *)RtlpHpSegFreeRangeInsert(a1, v16, 0LL);
  v18 = (__int64)v17;
  if ( v17 )
  {
    v19 = *v17;
    if ( *(_QWORD *)(v19 + 8) != v18 || (v20 = *(_QWORD **)(v18 + 8), *v20 != v18) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v18 )
    RtlpHpSegSegmentFree(a1, v18, 0x7FFFFFFF, 1);
}
