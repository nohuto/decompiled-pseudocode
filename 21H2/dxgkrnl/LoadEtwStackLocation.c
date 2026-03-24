/*
 * XREFs of LoadEtwStackLocation @ 0x1C0009880
 * Callers:
 *     DpiDispatchInternalIoctl @ 0x1C01298A0 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C0160FE0 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C0164B00 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C0177DE0 (DpiDispatchPower.c)
 *     DpiDispatchSystemControl @ 0x1C02C79D0 (DpiDispatchSystemControl.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 */

_BYTE *__fastcall LoadEtwStackLocation(_BYTE *a1, __int64 a2)
{
  __int64 *v4; // rax
  __m128i v5; // xmm1
  __int128 v6; // xmm0
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  __int64 v9; // rcx
  char v10; // dl
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-40h]

  memset(a1, 0, 0x48uLL);
  v4 = *(__int64 **)(a2 + 184);
  v5 = *(__m128i *)v4;
  v6 = *((_OWORD *)v4 + 1);
  v7 = *((__m128i *)v4 + 2);
  v8 = *((__m128i *)v4 + 3);
  v9 = *v4;
  v10 = _mm_cvtsi128_si32(*(__m128i *)v4);
  v11 = *v4;
  *((_QWORD *)a1 + 6) = v8.m128i_i64[0];
  v12 = v11 >> 8;
  v14 = v6;
  *a1 = v10;
  *(_QWORD *)&v6 = v4[8];
  a1[2] = BYTE2(v9);
  *((_QWORD *)a1 + 8) = v6;
  a1[1] = v12;
  a1[3] = BYTE3(v9);
  *((_QWORD *)a1 + 7) = _mm_srli_si128(v8, 8).m128i_u64[0];
  *((_QWORD *)a1 + 5) = _mm_srli_si128(v7, 8).m128i_u64[0];
  if ( v10 != 27 )
    return a1;
  if ( (unsigned __int8)v12 <= 0xCu )
  {
    if ( (_BYTE)v12 != 12 )
    {
      if ( (_BYTE)v12 )
      {
        if ( (_BYTE)v12 == 1 )
        {
          *((_QWORD *)a1 + 1) = v5.m128i_i64[1];
          return a1;
        }
        if ( (unsigned __int8)v12 <= 3u )
        {
          *((_DWORD *)a1 + 2) = v5.m128i_i32[2];
          *((_DWORD *)a1 + 3) = v14;
          *((_DWORD *)a1 + 4) = DWORD2(v14);
          *((_DWORD *)a1 + 5) = DWORD2(v14);
          *((_DWORD *)a1 + 6) = v7.m128i_i32[0];
          return a1;
        }
        if ( (_BYTE)v12 != 7 )
        {
          if ( (_BYTE)v12 == 8 )
          {
            *((_QWORD *)a1 + 1) = v5.m128i_i64[1];
            *((_DWORD *)a1 + 4) = v14;
            *((_QWORD *)a1 + 3) = *((_QWORD *)&v14 + 1);
            *((_QWORD *)a1 + 4) = v7.m128i_i64[0];
          }
          return a1;
        }
      }
LABEL_11:
      *((_DWORD *)a1 + 2) = v5.m128i_i32[2];
      return a1;
    }
    *((_DWORD *)a1 + 2) = v5.m128i_i32[2];
LABEL_19:
    *((_DWORD *)a1 + 3) = v14;
    return a1;
  }
  if ( (unsigned __int8)v12 < 0xFu )
    return a1;
  if ( (unsigned __int8)v12 <= 0x10u )
  {
    *((_DWORD *)a1 + 2) = v5.m128i_i32[2];
    *((_QWORD *)a1 + 2) = v14;
    *((_DWORD *)a1 + 6) = DWORD2(v14);
    *((_DWORD *)a1 + 7) = v7.m128i_i32[0];
    return a1;
  }
  switch ( (_BYTE)v12 )
  {
    case 0x13:
      goto LABEL_11;
    case 0x12:
      a1[8] = v5.m128i_i8[8];
      return a1;
    case 0x16:
      a1[8] = v5.m128i_i8[8];
      goto LABEL_19;
  }
  return a1;
}
