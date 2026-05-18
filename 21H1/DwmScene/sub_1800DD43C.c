/*
 * XREFs of sub_1800DD43C @ 0x1800DD43C
 * Callers:
 *     sub_1800DD3F0 @ 0x1800DD3F0 (sub_1800DD3F0.c)
 *     sub_1800DD43C @ 0x1800DD43C (sub_1800DD43C.c)
 * Callees:
 *     sub_180017F6C @ 0x180017F6C (sub_180017F6C.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800DD43C @ 0x1800DD43C (sub_1800DD43C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

void __fastcall sub_1800DD43C(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF

  v11 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_1800839A4(a2);
  if ( (v7[56] & a3[66]) == a3[65] )
  {
    sub_1800839A4((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v8 = *(_BYTE **)(a4 + 8);
      if ( *(_BYTE **)(a4 + 16) == v8 )
      {
        sub_180017F6C((const void **)a4, v8, &v11);
        v7 = v11;
      }
      else
      {
        *(_QWORD *)v8 = v7;
        *(_QWORD *)(a4 + 8) += 8LL;
      }
    }
    sub_1800839A4((__int64)v7);
    v9 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v9; i += 2 )
      sub_1800DD43C(a1, *i, a3, a4, (_DWORD)v11);
  }
}
