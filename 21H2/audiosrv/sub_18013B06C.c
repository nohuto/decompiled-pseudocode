/*
 * XREFs of sub_18013B06C @ 0x18013B06C
 * Callers:
 *     sub_18013B170 @ 0x18013B170 (sub_18013B170.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 */

__int64 __fastcall sub_18013B06C(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  _BYTE *v8; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-50h] BYREF

  v6 = sub_18013B948((_DWORD)a1, a2, (unsigned int)L"HWID", a3, 201);
  if ( v6 >= 0 )
  {
    v6 = sub_18013B948((_DWORD)a1, a2, (unsigned int)L"TopologyName", (int)a3 + 402, 261);
    if ( v6 >= 0 )
    {
      v6 = sub_18013B948((_DWORD)a1, a2, (unsigned int)L"PinId", (unsigned int)v9, 11);
      if ( v6 >= 0 )
      {
        *(_DWORD *)(a3 + 924) = o_wcstoul(v9, &v8, 10LL);
        if ( *(_WORD *)v8 || v8 == v9 )
          v6 = -2147024809;
        if ( v6 >= 0 )
          sub_18013A830(a1, a2, (__int64)L"Endpoint");
      }
    }
  }
  return (unsigned int)v6;
}
