/*
 * XREFs of sub_180026694 @ 0x180026694
 * Callers:
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 * Callees:
 *     sub_18002678C @ 0x18002678C (sub_18002678C.c)
 *     sub_1800267AC @ 0x1800267AC (sub_1800267AC.c)
 *     sub_180026A7C @ 0x180026A7C (sub_180026A7C.c)
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 *     sub_180027048 @ 0x180027048 (sub_180027048.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180026694(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[208]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  sub_180026A7C(a2, v14);
  v7 = sub_1800267AC(a1, v14, &v11);
  if ( v7 >= 0 )
  {
    v8 = sub_18002678C(v11, a2);
    v13 = v8;
    if ( v8 )
      goto LABEL_12;
    v9 = sub_180027048(v11, a2, &v12);
    v5 = v12;
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_7;
    sub_180026FF4(v11, v12, &v13);
    v8 = v13;
    if ( v13 != v5 )
    {
LABEL_12:
      *a3 = v8;
    }
    else
    {
      *a3 = v5;
      v5 = 0LL;
    }
    v7 = 0;
  }
LABEL_7:
  if ( v11 )
    sub_1800274E0(v11);
  if ( v5 )
    sub_1800274E0(v5);
  return (unsigned int)v7;
}
