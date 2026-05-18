/*
 * XREFs of sub_1801090C0 @ 0x1801090C0
 * Callers:
 *     sub_1800D5DD4 @ 0x1800D5DD4 (sub_1800D5DD4.c)
 *     sub_1800D60A0 @ 0x1800D60A0 (sub_1800D60A0.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     sub_1800D6A24 @ 0x1800D6A24 (sub_1800D6A24.c)
 *     sub_1800D76F4 @ 0x1800D76F4 (sub_1800D76F4.c)
 *     sub_1800E1280 @ 0x1800E1280 (sub_1800E1280.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E1408 @ 0x1800E1408 (sub_1800E1408.c)
 *     sub_1800E1544 @ 0x1800E1544 (sub_1800E1544.c)
 *     sub_1800E1798 @ 0x1800E1798 (sub_1800E1798.c)
 *     sub_1800E1830 @ 0x1800E1830 (sub_1800E1830.c)
 *     sub_180107AF8 @ 0x180107AF8 (sub_180107AF8.c)
 *     sub_180108118 @ 0x180108118 (sub_180108118.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 *     sub_18010986C @ 0x18010986C (sub_18010986C.c)
 *     sub_180109944 @ 0x180109944 (sub_180109944.c)
 *     sub_180109C88 @ 0x180109C88 (sub_180109C88.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1801090C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // rax
  __m128i *v7; // rax
  char v8; // si
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 **v11; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int128 *v14; // rax
  __int128 *v15; // rax
  __int64 v16; // r14
  __int128 *v17; // rax
  _OWORD *v18; // rax
  bool v19; // al
  __int64 v20; // r8
  __int64 v21; // rcx
  double v22; // xmm6_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  double v26; // xmm0_8
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 **v32; // rax
  __int64 k; // rax
  __int64 *m; // rcx
  __int64 result; // rax
  __int128 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  _BYTE v39[96]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-40h]
  __int128 v42; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-28h]
  __int128 v44; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-10h]
  _OWORD v46[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  __int64 v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int64 v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  __int64 v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  __int64 v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  char v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  __int64 v60[5]; // [rsp+188h] [rbp+80h] BYREF
  __m128i v61; // [rsp+1B0h] [rbp+A8h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  _BYTE v63[24]; // [rsp+1C8h] [rbp+C0h] BYREF
  _OWORD v64[7]; // [rsp+1E0h] [rbp+D8h] BYREF

  v4 = a2;
  v38 = a2;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  *(_OWORD *)v60 = 0LL;
  v6 = operator new(0x58uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  v60[0] = (__int64)v6;
  sub_1801086C8(v4, (__int64)v46);
  sub_180069FBC(v60, (__int64)v60);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_18006DAE0(*(_QWORD ***)(a1 + 896));
    if ( sub_1800E1544() )
    {
      v7 = (__m128i *)sub_1800E1798(a1, (__int64)&v40);
    }
    else
    {
      LODWORD(v36) = 4;
      *((_QWORD *)&v36 + 1) = 0LL;
      LOBYTE(v37) = 1;
      v44 = (unsigned __int64)v36;
      v45 = v37;
      v7 = (__m128i *)&v44;
    }
    v61 = *v7;
    v62 = v7[1].m128i_i64[0];
    if ( _mm_cvtsi128_si32(v61) == 2 )
    {
      v8 = 1;
      v9 = *(_QWORD **)(a1 + 880);
      v10 = (_QWORD *)*v9;
      while ( v10 != v9 )
      {
        v8 = (unsigned __int8)sub_180109944(v10 + 8) != 0 ? v8 : 0;
        v11 = (__int64 **)v10[2];
        if ( *((_BYTE *)v11 + 25) )
        {
          for ( i = v10[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v10 = (_QWORD *)i;
          v10 = (_QWORD *)i;
        }
        else
        {
          v10 = (_QWORD *)v10[2];
          for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v10 = j;
        }
      }
      if ( sub_1800E1544() )
      {
        v14 = (__int128 *)sub_1800E1798(a1 + 176, (__int64)&v40);
      }
      else
      {
        LODWORD(v36) = 4;
        *((_QWORD *)&v36 + 1) = 0LL;
        LOBYTE(v37) = 1;
        v42 = (unsigned __int64)v36;
        v43 = v37;
        v14 = &v42;
      }
      v44 = *v14;
      if ( sub_1800E1544() )
      {
        v15 = (__int128 *)sub_1800E1798(a1 + 352, (__int64)v63);
      }
      else
      {
        LODWORD(v36) = 4;
        *((_QWORD *)&v36 + 1) = 0LL;
        LOBYTE(v37) = 1;
        v40 = (unsigned __int64)v36;
        v41 = v37;
        v15 = &v40;
      }
      v42 = *v15;
      v16 = a1 + 528;
      if ( sub_1800E1544() )
      {
        v17 = (__int128 *)sub_1800E1798(a1 + 528, (__int64)v63);
      }
      else
      {
        LODWORD(v36) = 4;
        *((_QWORD *)&v36 + 1) = 0LL;
        LOBYTE(v37) = 1;
        v40 = (unsigned __int64)v36;
        v41 = v37;
        v17 = &v40;
      }
      v36 = *v17;
      v37 = *((_QWORD *)v17 + 2);
      if ( sub_1800E1544() )
      {
        v18 = (_OWORD *)sub_1800E1830(a1 + 704, (__int64)v46);
      }
      else
      {
        *(_DWORD *)v39 = 4;
        memset(&v39[8], 0, 88);
        v64[0] = *(_OWORD *)v39;
        v64[1] = *(_OWORD *)&v39[16];
        v64[2] = *(_OWORD *)&v39[32];
        memset(&v64[3], 0, 48);
        v18 = v64;
      }
      *(_OWORD *)v39 = *v18;
      *(_OWORD *)&v39[16] = v18[1];
      *(_OWORD *)&v39[32] = v18[2];
      *(_OWORD *)&v39[48] = v18[3];
      *(_OWORD *)&v39[64] = v18[4];
      *(_OWORD *)&v39[80] = v18[5];
      v19 = _mm_cvtsi128_si32(*(__m128i *)v39) == 2;
      if ( v8 && (_DWORD)v44 == 2 && (_DWORD)v42 == 2 && (_DWORD)v36 == 2 && v19 )
      {
        sub_1800D76F4((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v62 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v20 = *((_QWORD *)&v42 + 1);
          v21 = *((_QWORD *)&v42 + 1) - *((_QWORD *)&v44 + 1);
          if ( v61.m128i_i64[1] < 0 )
            v22 = (double)(int)(v61.m128i_i8[8] & 1 | ((unsigned __int64)v61.m128i_i64[1] >> 1))
                + (double)(int)(v61.m128i_i8[8] & 1 | ((unsigned __int64)v61.m128i_i64[1] >> 1));
          else
            v22 = (double)v61.m128i_i32[2];
          if ( v44 < 0 )
            v23 = (double)(int)(BYTE8(v44) & 1 | (*((_QWORD *)&v44 + 1) >> 1))
                + (double)(int)(BYTE8(v44) & 1 | (*((_QWORD *)&v44 + 1) >> 1));
          else
            v23 = (double)SDWORD2(v44);
          *(double *)(a1 + 936) = v23 / v22 * 1000.0;
          if ( v20 < 0 )
            v24 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
                + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
          else
            v24 = (double)(int)v20;
          *(double *)(a1 + 944) = v24 / v22 * 1000.0;
          if ( v36 < 0 )
            v25 = (double)(int)(BYTE8(v36) & 1 | (*((_QWORD *)&v36 + 1) >> 1))
                + (double)(int)(BYTE8(v36) & 1 | (*((_QWORD *)&v36 + 1) >> 1));
          else
            v25 = (double)SDWORD2(v36);
          *(double *)(a1 + 952) = v25 / v22 * 1000.0;
          if ( v21 < 0 )
            v26 = (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1))
                + (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1));
          else
            v26 = (double)(int)v21;
          *(double *)(a1 + 928) = v26 / v22 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v39[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v39[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v39[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v39[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v39[72];
          *(_QWORD *)(a1 + 1040) = *(_QWORD *)&v39[88];
          *(_BYTE *)(a1 + 1048) = 1;
          v27 = *(_QWORD **)(a1 + 880);
          v28 = (_QWORD *)*v27;
          if ( (_QWORD *)*v27 != v27 )
          {
            do
            {
              v29 = sub_18010986C(v28 + 8, v63);
              *(_QWORD *)&v39[16] = 0LL;
              *(_QWORD *)&v39[24] = 0LL;
              sub_180020B7C(v39, (__int64)(v28 + 4));
              *(_OWORD *)&v39[32] = *(_OWORD *)v29;
              *(_QWORD *)&v39[48] = *(_QWORD *)(v29 + 16);
              v30 = sub_180107AF8(a1 + 1064, *(_QWORD *)(a1 + 1064), (__int64)v39);
              sub_180108118((_QWORD *)(a1 + 1064), (__int64)&v36, 0, v30 + 4, v30);
              if ( *(_QWORD *)&v39[24] >= 0x10uLL )
              {
                v31 = *(_QWORD *)v39;
                if ( (unsigned __int64)(*(_QWORD *)&v39[24] + 1LL) >= 0x1000 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)v39 - 8LL);
                  if ( (unsigned __int64)(*(_QWORD *)v39 - v31 - 8) > 0x1F )
                  {
                    o__invalid_parameter_noinfo_noreturn(v31, *(_QWORD *)&v39[24] + 40LL);
                    JUMPOUT(0x18010986BLL);
                  }
                }
                j_j__o_free(v31);
              }
              v32 = (__int64 **)v28[2];
              if ( *((_BYTE *)v32 + 25) )
              {
                for ( k = v28[1]; !*(_BYTE *)(k + 25) && v28 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
                  v28 = (_QWORD *)k;
                v28 = (_QWORD *)k;
              }
              else
              {
                v28 = (_QWORD *)v28[2];
                for ( m = *v32; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                  v28 = m;
              }
            }
            while ( v28 != v27 );
            v16 = a1 + 528;
          }
        }
        sub_1800E1280((__int64)v46);
        sub_1800E1408(a1, (__int64 *)v46);
        sub_1800E12F4(v46);
        sub_1800E1280((__int64)v46);
        sub_1800E1408(a1 + 176, (__int64 *)v46);
        sub_1800E12F4(v46);
        sub_1800E1280((__int64)v46);
        sub_1800E1408(a1 + 352, (__int64 *)v46);
        sub_1800E12F4(v46);
        sub_1800E1280((__int64)v46);
        sub_1800E1408(v16, (__int64 *)v46);
        sub_1800E12F4(v46);
        sub_1800E1280((__int64)v46);
        sub_1800E1408(a1 + 704, (__int64 *)v46);
        sub_1800E12F4(v46);
        sub_180109C88(a1 + 880);
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = v38;
    }
  }
  result = *(unsigned int *)(a1 + 920);
  if ( (_DWORD)result == 3 )
  {
    sub_1800D6A24(v4, a1 + 928);
    return *(unsigned int *)(a1 + 920);
  }
  return result;
}
