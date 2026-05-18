/*
 * XREFs of sub_18010633C @ 0x18010633C
 * Callers:
 *     sub_180106458 @ 0x180106458 (sub_180106458.c)
 * Callees:
 *     sub_180105EAC @ 0x180105EAC (sub_180105EAC.c)
 *     sub_1801060C8 @ 0x1801060C8 (sub_1801060C8.c)
 */

void __fastcall sub_18010633C(__int64 *a1, char *a2, char *a3)
{
  signed __int64 v3; // rax
  char *v4; // rsi
  __int64 *v6; // rbp
  char *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v3 = a3 - (char *)a1;
    v4 = a3;
    v6 = a1;
    while ( (__int64)(v3 & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
    {
      sub_1801060C8(&v7, (unsigned __int64)v6, v4);
      if ( v8 > (__int64 *)a2 )
      {
        v4 = v7;
        if ( v7 <= a2 )
          return;
      }
      else
      {
        v6 = v8;
      }
      v3 = v4 - (char *)v6;
    }
    sub_180105EAC(v6, (__int64 *)v4);
  }
}
