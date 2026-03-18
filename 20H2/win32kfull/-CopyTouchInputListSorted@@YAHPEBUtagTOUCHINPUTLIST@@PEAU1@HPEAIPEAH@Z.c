/*
 * XREFs of ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01DADBC
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DB008 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  __m128i *v6; // rsi
  int v7; // r13d
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  __m128i v12; // xmm4
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int i; // edx
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i v29; // [rsp+38h] [rbp-50h]

  v6 = (__m128i *)*((_QWORD *)a1 + 1);
  v7 = *((_DWORD *)a1 + 1);
  v8 = 1;
  while ( 2 )
  {
    v9 = 4LL;
    if ( v7 )
    {
      v10 = *v6;
      v29 = *v6;
      v11 = v6[1];
      v12 = v6[2];
      if ( (v11.m128i_i32[1] & 0xFFFFFF00) != 0 || (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) & 0xFFFFFFF8) != 0 )
      {
        v19 = 1004LL;
        goto LABEL_31;
      }
      v13 = (_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) & 0xF) - 4;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_15;
        v15 = v14 - 4;
        if ( !v15 )
        {
          v18 = 1;
          goto LABEL_17;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v18 = 2;
          goto LABEL_17;
        }
        if ( (unsigned int)(v16 - 1) < 2 )
        {
LABEL_15:
          v19 = RtlNtStatusToDosError(-1073741811);
LABEL_31:
          UserSetLastError(v19, v9, a3);
          return 0LL;
        }
        v17 = -1;
      }
      else
      {
        v17 = 3;
      }
      if ( v17 == -1 )
        goto LABEL_15;
      v18 = 4;
LABEL_17:
      if ( v8 != v18 )
      {
        if ( v8 == 1 )
        {
          v8 = v18;
        }
        else if ( v18 != 1 )
        {
          goto LABEL_15;
        }
      }
      v20 = *((_DWORD *)a2 + 1);
      for ( i = v20; ; --i )
      {
        if ( !i )
          goto LABEL_29;
        v22 = i - 1;
        v23 = *((_QWORD *)a2 + 1);
        a3 = 6 * v22;
        if ( v29.m128i_i64[1] >= *(_QWORD *)(v23 + 48 * v22 + 8)
          && (v29.m128i_i64[1] != *(_QWORD *)(v23 + 48 * v22 + 8) || v11.m128i_i32[0] >= *(_DWORD *)(v23 + 48 * v22 + 16)) )
        {
          break;
        }
        v24 = 6LL * i;
        *(_OWORD *)(v23 + 8 * v24) = *(_OWORD *)(v23 + 48 * v22);
        *(_OWORD *)(v23 + 8 * v24 + 16) = *(_OWORD *)(v23 + 48 * v22 + 16);
        *(_OWORD *)(v23 + 8 * v24 + 32) = *(_OWORD *)(v23 + 48 * v22 + 32);
      }
      v25 = *((_QWORD *)a2 + 1) + 48LL * (i - 1);
      if ( v29.m128i_i64[1] != *(_QWORD *)(v25 + 8) || v11.m128i_i32[0] != *(_DWORD *)(v25 + 16) )
      {
LABEL_29:
        v26 = 6LL * i;
        v27 = *((_QWORD *)a2 + 1);
        *(__m128i *)(v27 + 8 * v26) = v10;
        *(__m128i *)(v27 + 8 * v26 + 16) = v11;
        *(__m128i *)(v27 + 8 * v26 + 32) = v12;
        *((_DWORD *)a2 + 1) = v20 + 1;
        --v7;
        v6 += 3;
        continue;
      }
      goto LABEL_15;
    }
    break;
  }
  if ( a4 )
    *a4 = v8;
  return 1LL;
}
