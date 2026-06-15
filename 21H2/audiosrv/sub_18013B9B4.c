/*
 * XREFs of sub_18013B9B4 @ 0x18013B9B4
 * Callers:
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 */

__int64 __fastcall sub_18013B9B4(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v7; // ebx
  __int128 *v9; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+48h] [rbp-40h]
  __int16 v12; // [rsp+4Ch] [rbp-3Ch]

  v7 = sub_18013B948(a1, a2, (__int64)L"ID", a3, 0x101u);
  if ( v7 >= 0 )
  {
    v11 = 0;
    v12 = 0;
    v10 = 0LL;
    v7 = sub_18013B948(a1, a2, (__int64)L"Consumption", (__int64)&v10, 0xBu);
    if ( v7 >= 0 )
    {
      *a5 = o_wcstoul(&v10, &v9, 10LL);
      if ( *(_WORD *)v9 || v9 == &v10 )
        v7 = -2147024809;
      if ( v7 >= 0 )
        return (unsigned int)sub_18013A830(a1, a2, (__int64)L"Resource");
    }
  }
  return (unsigned int)v7;
}
