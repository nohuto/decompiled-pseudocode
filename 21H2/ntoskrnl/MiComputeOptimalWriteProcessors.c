/*
 * XREFs of MiComputeOptimalWriteProcessors @ 0x1403BCA84
 * Callers:
 *     MiZeroPageCalibrateIsr @ 0x1403BC5A0 (MiZeroPageCalibrateIsr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeOptimalWriteProcessors(unsigned int *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // r8
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  unsigned __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // [rsp+0h] [rbp-38h]
  __m128i si128; // [rsp+10h] [rbp-28h]
  __int128 v22; // [rsp+20h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *((_QWORD *)a1 + 3);
  v22 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v20 = 0LL;
  if ( v2 )
  {
    v4 = *a1;
    v5 = a1 + 4;
    v6 = 0LL;
    v7 = 2;
    v8 = 2LL;
    do
    {
      if ( (_DWORD)v4 )
      {
        v9 = v4;
        do
        {
          v10 = *(_QWORD *)(v6 + v2);
          if ( v10 && v10 < si128.m128i_i64[v6 / 8] )
          {
            si128.m128i_i64[v6 / 8] = v10;
            *(_QWORD *)((char *)&v22 + v6) = v2;
          }
          v2 += 16LL;
          --v9;
        }
        while ( v9 );
      }
      v11 = *(_QWORD *)((char *)&v22 + v6);
      if ( v11 )
      {
        v12 = si128.m128i_u64[v6 / 8];
        v2 = *(_QWORD *)((char *)&v22 + v6);
        *(_QWORD *)((char *)&v20 + v6) = v11;
        v13 = v12 + v12 / 0xA;
        v14 = *((_QWORD *)a1 + 3);
        while ( v2 > v14 )
        {
          v2 -= 16LL;
          v15 = *(_QWORD *)(v6 + v2);
          if ( v15 )
          {
            if ( v15 < v13 )
              *(_QWORD *)((char *)&v20 + v6) = v2;
          }
        }
      }
      v16 = *(_QWORD *)((char *)&v20 + v6);
      v6 += 8LL;
      *v5++ = ((v16 - *((_QWORD *)a1 + 3)) >> 4) + 1;
      --v8;
    }
    while ( v8 );
    v17 = -1LL;
    LODWORD(result) = 0;
    v18 = 0LL;
    do
    {
      v19 = *(_QWORD *)((char *)&v20 + v18);
      if ( v19 && *(_QWORD *)(v19 + v18) < v17 )
      {
        v7 = result;
        v17 = *(_QWORD *)(v19 + v18);
      }
      result = (unsigned int)(result + 1);
      v18 += 8LL;
    }
    while ( (int)result <= 1 );
    a1[1] = v7;
  }
  return result;
}
