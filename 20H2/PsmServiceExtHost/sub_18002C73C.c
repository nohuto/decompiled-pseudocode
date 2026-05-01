/*
 * XREFs of sub_18002C73C @ 0x18002C73C
 * Callers:
 *     sub_18002C410 @ 0x18002C410 (sub_18002C410.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002C73C(__int64 a1, int a2, void *a3, __int64 a4, __int64 a5)
{
  int v6; // r14d
  unsigned int v9; // ebx
  _BYTE v11[80]; // [rsp+30h] [rbp-88h] BYREF

  v6 = qword_1800B41A0;
  sub_18001E380();
  if ( a4 && a5 )
  {
    sub_18002C6F4(v11, a3);
    v9 = sub_18002CAD4(v6, a2, (unsigned int)v11, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  sub_18000F390();
  return v9;
}
