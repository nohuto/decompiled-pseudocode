/*
 * XREFs of sub_1800833A8 @ 0x1800833A8
 * Callers:
 *     sub_1800807D8 @ 0x1800807D8 (sub_1800807D8.c)
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 * Callees:
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800831C4 @ 0x1800831C4 (sub_1800831C4.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800833A8(__int64 a1, _DWORD *a2, __int64 a3, int a4)
{
  __m128 *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  _OWORD v15[4]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD v16[4]; // [rsp+60h] [rbp-A8h] BYREF
  __m128 v17[4]; // [rsp+A0h] [rbp-68h] BYREF

  if ( a4 )
  {
    if ( a4 == 2 )
    {
      v7 = (__m128 *)sub_180080974(a1, v16);
    }
    else
    {
      sub_1800839A4(a1);
      if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
        sub_1800838E4(a1);
      v7 = (__m128 *)v15;
      v8 = *(_OWORD *)(a1 + 240);
      v15[0] = *(_OWORD *)(a1 + 224);
      v9 = *(_OWORD *)(a1 + 256);
      v15[1] = v8;
      v10 = *(_OWORD *)(a1 + 272);
      v15[2] = v9;
      v15[3] = v10;
    }
    v11 = v7[1];
    v17[0] = *v7;
    v12 = v7[2];
    v17[1] = v11;
    v13 = v7[3];
    v17[2] = v12;
    v17[3] = v13;
    sub_1800831C4(a2, (unsigned __int64 *)a3, v17);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a3;
    a2[2] = *(_DWORD *)(a3 + 8);
  }
  return a2;
}
