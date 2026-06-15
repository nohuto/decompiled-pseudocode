/*
 * XREFs of sub_18011D4F8 @ 0x18011D4F8
 * Callers:
 *     sub_1800C5AF8 @ 0x1800C5AF8 (sub_1800C5AF8.c)
 * Callees:
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_1800C4FF4 @ 0x1800C4FF4 (sub_1800C4FF4.c)
 */

__int64 __fastcall sub_18011D4F8(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm6
  __int64 v4; // rcx
  _QWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v8; // rcx
  _QWORD *v9; // r10
  _QWORD *v10; // r11
  _QWORD *v11; // r10
  _QWORD *v12; // r11
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  if ( (unsigned int)sub_1800C4FF4(a2, (__int64)&xmmword_180160990) )
  {
    v13 = v3;
    return sub_1800374C8(v5, &v13, 1u, 0, 0LL, 0LL, v6);
  }
  else if ( (unsigned int)sub_1800C4FF4(v4, (__int64)&xmmword_1801609A8) )
  {
    v13 = v3;
    return sub_180037744(v9, &v13, 1u, 0, 0LL, 0LL, v10);
  }
  else if ( (unsigned int)sub_1800C4FF4(v8, (__int64)&xmmword_180160978) )
  {
    return sub_1800485D0(v11, 1u, 0, 0LL, 0LL, v12);
  }
  else
  {
    return 2147942487LL;
  }
}
