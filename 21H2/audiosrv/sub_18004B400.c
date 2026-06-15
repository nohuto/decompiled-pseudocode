/*
 * XREFs of sub_18004B400 @ 0x18004B400
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180045D70 @ 0x180045D70 (sub_180045D70.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180065320 @ 0x180065320 (sub_180065320.c)
 *     sub_180065E24 @ 0x180065E24 (sub_180065E24.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 */

__int64 __fastcall sub_18004B400(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  int v3; // r9d
  __int16 v4; // r8
  unsigned __int16 v5; // ax
  __int128 v6; // xmm1
  __int16 v7; // r11
  __int64 v8; // xmm0_8
  int v9; // r10d
  int v10; // r9d
  unsigned __int16 v11; // ax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // r9d
  __int16 v15; // dx
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // di
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 v26; // di
  __int128 v27; // xmm0
  __int128 Buf2; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v29[24]; // [rsp+30h] [rbp-50h]
  __int128 Buf1; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v31[24]; // [rsp+58h] [rbp-28h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    v3 = *a1;
    v4 = -2;
    v5 = a1[8];
    if ( (_WORD)v3 == 0xFFFE )
    {
      if ( v5 != 22 )
      {
        v20 = *((_QWORD *)a1 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)a1 + 3) == 0x10000000000003LL )
          v20 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
        if ( v20 )
        {
          v21 = *((_QWORD *)a1 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)a1 + 3) == 0x10000000000001LL )
            v21 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
          if ( v21 )
            return v2;
        }
      }
      v6 = *((_OWORD *)a1 + 1);
      Buf1 = *(_OWORD *)a1;
      v7 = Buf1;
      v8 = *((_QWORD *)a1 + 4);
      *(_OWORD *)v31 = v6;
      v9 = DWORD1(v6);
      *(_QWORD *)&v31[16] = v8;
    }
    else
    {
      if ( v5 && (((_WORD)v3 - 1) & 0xFFFD) != 0 )
        return v2;
      v22 = a1[1];
      if ( (unsigned __int16)(v22 - 1) > 1u || ((a1[7] - 8) & 0xFFE7) != 0 )
        return v2;
      v23 = *(_OWORD *)a1;
      *(_WORD *)&v31[2] = a1[7];
      v7 = -2;
      v9 = (v22 == 1) + 3;
      Buf1 = v23;
      *(_DWORD *)&v31[4] = v9;
      *(_OWORD *)&v31[8] = xmmword_18015B740;
      LOWORD(Buf1) = -2;
      *(_DWORD *)&v31[8] = v3;
    }
    v10 = *a2;
    v11 = a2[8];
    *(_WORD *)v31 = 22;
    if ( (_WORD)v10 != 0xFFFE )
    {
      if ( v11 && (((_WORD)v10 - 1) & 0xFFFD) != 0 )
        return v2;
      v26 = a2[1];
      if ( (unsigned __int16)(v26 - 1) > 1u || ((a2[7] - 8) & 0xFFE7) != 0 )
        return v2;
      v27 = *(_OWORD *)a2;
      *(_WORD *)&v29[2] = a2[7];
      *(_OWORD *)&v29[8] = xmmword_18015B740;
      *(_DWORD *)&v29[8] = v10;
      v14 = (v26 == 1) + 3;
      Buf2 = v27;
      *(_DWORD *)&v29[4] = v14;
      LOWORD(Buf2) = -2;
      goto LABEL_9;
    }
    if ( v11 == 22 )
      goto LABEL_8;
    v24 = *((_QWORD *)a2 + 3) - 0x10000000000003LL;
    if ( *((_QWORD *)a2 + 3) == 0x10000000000003LL )
      v24 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
    if ( !v24 )
      goto LABEL_8;
    v25 = *((_QWORD *)a2 + 3) - 0x10000000000001LL;
    if ( *((_QWORD *)a2 + 3) == 0x10000000000001LL )
      v25 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
    if ( !v25 )
    {
LABEL_8:
      v12 = *((_OWORD *)a2 + 1);
      Buf2 = *(_OWORD *)a2;
      v4 = Buf2;
      v13 = *((_QWORD *)a2 + 4);
      *(_OWORD *)v29 = v12;
      v14 = DWORD1(v12);
      *(_QWORD *)&v29[16] = v13;
LABEL_9:
      *(_WORD *)v29 = 22;
      if ( WORD1(Buf1) )
      {
        v15 = WORD1(Buf2);
      }
      else
      {
        v15 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v16 = DWORD1(Buf2);
      }
      else
      {
        v16 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v17 = HIWORD(Buf2);
      }
      else
      {
        v17 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v9 )
      {
        v14 = 0;
        *(_DWORD *)&v29[4] = 0;
      }
      if ( !v7 )
      {
        v4 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v15 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v16 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v17 )
        HIDWORD(Buf1) = 0;
      if ( !v14 )
        *(_DWORD *)&v31[4] = 0;
      if ( !v4 )
        LOWORD(Buf1) = 0;
      v18 = *(_QWORD *)&v31[8] - *(_QWORD *)&v29[8];
      if ( *(_QWORD *)&v31[8] == *(_QWORD *)&v29[8] )
        v18 = *(_QWORD *)&v31[16] - *(_QWORD *)&v29[16];
      if ( !v18 && !memcmp(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
