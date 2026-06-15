/*
 * XREFs of sub_18013B2C8 @ 0x18013B2C8
 * Callers:
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 *     sub_180138F94 @ 0x180138F94 (sub_180138F94.c)
 *     sub_180139C34 @ 0x180139C34 (sub_180139C34.c)
 *     sub_18013A430 @ 0x18013A430 (sub_18013A430.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 *     sub_18013B9B4 @ 0x18013B9B4 (sub_18013B9B4.c)
 */

__int64 __fastcall sub_18013B2C8(unsigned int *a1, __int64 a2, int *a3, __int64 a4, __int64 *a5)
{
  int *v5; // rdi
  int v6; // ebx
  int v7; // r9d
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  int v11; // [rsp+30h] [rbp-298h] BYREF
  int v12; // [rsp+34h] [rbp-294h] BYREF
  int v13; // [rsp+38h] [rbp-290h]
  int *v14; // [rsp+40h] [rbp-288h]
  __int64 v15; // [rsp+48h] [rbp-280h]
  unsigned int *v16; // [rsp+50h] [rbp-278h]
  __int64 v17; // [rsp+60h] [rbp-268h]
  __int64 *v18; // [rsp+70h] [rbp-258h]
  ATL::CAtlException *v19; // [rsp+78h] [rbp-250h] BYREF
  ATL::CAtlException *v20; // [rsp+80h] [rbp-248h] BYREF
  int v21; // [rsp+90h] [rbp-238h] BYREF
  unsigned int v22; // [rsp+94h] [rbp-234h] BYREF
  unsigned __int16 v23[260]; // [rsp+98h] [rbp-230h] BYREF

  v5 = a3;
  v16 = a1;
  v15 = a2;
  v14 = a3;
  v17 = a4;
  v18 = a5;
  v6 = 0;
  sub_1800F3B8C((__int64)L"Parsing resource IDs and limits");
  v13 = 0;
  v12 = 1;
  while ( 2 )
  {
    if ( v6 >= 0 )
    {
      if ( !v12 )
      {
        if ( (unsigned int)(v13 - 1) > 0xE )
          return (unsigned int)-2147024809;
        return (unsigned int)v6;
      }
      v6 = sub_18013A944(v16, v15, (__int64)L"Resource", (__int64)L"Limits", 0, &v12);
      if ( v6 < 0 )
        continue;
      if ( !v12 )
        continue;
      v6 = sub_18013B9B4((_DWORD)v16, v15, (unsigned int)v23, v7, (__int64)&v22);
      if ( v6 < 0 )
        continue;
      if ( sub_180139C34(v17, v23, &v11) )
      {
        v6 = -2147024713;
        sub_1800F3AD4((__int64)L"Repeated resource type limit declaration for resource ID %s in XML not allowed", v23);
        continue;
      }
      try
      {
        sub_18013A430(v17, v23, v5);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v9 = v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          o__resetstkoflw();
        v11 = *(_DWORD *)v9;
        v6 = v11;
        if ( v11 >= 0 )
        {
          v5 = v14;
          goto LABEL_29;
        }
LABEL_12:
        v5 = v14;
        continue;
      }
LABEL_29:
      try
      {
        v21 = *v5;
        v6 = 0;
        sub_180138F94(v18, (__int64)&v21);
      }
      catch ( ATL::CAtlException *v20 )
      {
        v10 = v20;
        if ( *(_DWORD *)v20 == -1073741571 )
          o__resetstkoflw();
        v11 = *(_DWORD *)v10;
        v6 = v11;
        if ( v11 < 0 )
          goto LABEL_12;
        v5 = v14;
      }
      ++*v5;
      ++v13;
      sub_1800F3B8C((__int64)L"Resource ID %s found with limit %d", v23, v22);
      continue;
    }
    return (unsigned int)v6;
  }
}
