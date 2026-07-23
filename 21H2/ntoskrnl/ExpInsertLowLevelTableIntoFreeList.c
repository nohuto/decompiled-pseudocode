/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x1406959E4
 * Callers:
 *     ExpAllocateHandleTable @ 0x14069577C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140695888 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall ExpInsertLowLevelTableIntoFreeList(volatile signed __int32 *a1, _QWORD *a2, ULONG_PTR a3, char a4)
{
  __m128i v5; // xmm2
  _QWORD *v7; // rsi
  char result; // al
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r11
  __m128i v12; // xmm3
  unsigned int v13; // eax
  __m128i v14; // xmm1
  _QWORD *v15; // rdi
  __m128i v16; // [rsp+20h] [rbp-18h]

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v9 = 1;
    v10 = a2 + 3;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v12 = _mm_cvtsi32_si128(4u);
    do
    {
      v13 = v9 + 1;
      v16.m128i_i64[0] = _xmm;
      v9 += 2;
      *(v10 - 1) = 0LL;
      v10[1] = v11;
      v14 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v13), 0), v16), (__m128i)0LL),
                v12),
              v5);
      *v10 = v14.m128i_i64[0];
      v10 += 4;
      *(v10 - 2) = _mm_srli_si128(v14, 8).m128i_u64[0];
    }
    while ( v9 < 0xFF );
    v7 = a2 + 510;
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  else
  {
    v7 = a2 + 510;
  }
  result = _InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    ExAcquirePushLockExclusiveEx(a3, 0LL);
    v15 = a2 + 2;
    if ( *(_QWORD *)(a3 + 8) )
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v15;
    else
      *(_QWORD *)(a3 + 8) = v15;
    *(_QWORD *)(a3 + 16) = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a3);
    return KeAbPostRelease(a3);
  }
  return result;
}
