/*
 * XREFs of sub_180063C48 @ 0x180063C48
 * Callers:
 *     sub_180063960 @ 0x180063960 (sub_180063960.c)
 *     sub_180092530 @ 0x180092530 (sub_180092530.c)
 *     sub_18009ACD0 @ 0x18009ACD0 (sub_18009ACD0.c)
 *     sub_18009B9E0 @ 0x18009B9E0 (sub_18009B9E0.c)
 *     sub_1800A9E60 @ 0x1800A9E60 (sub_1800A9E60.c)
 *     sub_1800C92D0 @ 0x1800C92D0 (sub_1800C92D0.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800CCC60 @ 0x1800CCC60 (sub_1800CCC60.c)
 *     sub_1800CD510 @ 0x1800CD510 (sub_1800CD510.c)
 *     sub_1800EF770 @ 0x1800EF770 (sub_1800EF770.c)
 *     sub_1800F25F8 @ 0x1800F25F8 (sub_1800F25F8.c)
 * Callees:
 *     sub_18002706C @ 0x18002706C (sub_18002706C.c)
 *     sub_180063BA4 @ 0x180063BA4 (sub_180063BA4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180063C48(__int64 *a1, unsigned int *a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_18002706C(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = j[2];
    ++v4;
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (__int64 *)i;
      j = (__int64 *)i;
    }
    else
    {
      v7 = *(_QWORD *)v5;
      for ( j = (__int64 *)j[2]; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
        j = (__int64 *)v7;
    }
  }
  sub_180063BA4((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
