/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x18003F370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18003ED34 @ 0x18003ED34 (sub_18003ED34.c)
 *     sub_18003EEC8 @ 0x18003EEC8 (sub_18003EEC8.c)
 *     sub_18003F02C @ 0x18003F02C (sub_18003F02C.c)
 *     sub_18003F554 @ 0x18003F554 (sub_18003F554.c)
 *     sub_18003F5F8 @ 0x18003F5F8 (sub_18003F5F8.c)
 *     sub_18003F734 @ 0x18003F734 (sub_18003F734.c)
 *     sub_18003F934 @ 0x18003F934 (sub_18003F934.c)
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045998 @ 0x180045998 (sub_180045998.c)
 *     sub_180045A78 @ 0x180045A78 (sub_180045A78.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 *     sub_180083AFC @ 0x180083AFC (sub_180083AFC.c)
 */

int __fastcall PsmInitializeServiceExtension4(__int64 a1)
{
  __int64 v1; // rbx
  int result; // eax
  int v4; // edi
  int v5; // edi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  DWORD v10; // edi
  __int64 v11; // rsi
  __int64 v12; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE TlsValue[144]; // [rsp+58h] [rbp-49h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  dwTlsIndex = TlsAlloc();
  sub_18000B7F8(TlsValue);
  *(_QWORD *)&qword_1800B41A8 = 0LL;
  result = sub_180045A78();
  if ( !(_BYTE)result || (result = sub_180045998(), !(_BYTE)result) )
  {
    v4 = -2147467263;
    goto LABEL_12;
  }
  result = sub_18003ED34(a1, &v12);
  v4 = result;
  if ( result < 0 )
  {
    v1 = v12;
  }
  else
  {
    result = sub_18003EEC8();
    v5 = result;
    if ( result < 0 || (result = sub_18003F02C(), v5 = result, result < 0) )
    {
      v1 = v12;
      v4 = v5 | 0x10000000;
      goto LABEL_12;
    }
    *(_QWORD *)&qword_1800B41A8 = &unk_1800B4330;
    sub_18003F554(&dword_1800B31E0);
    sub_18003F554(&dword_1800B3218);
    v1 = v12;
    result = sub_1800403FC(v12);
    v6 = result;
    if ( result < 0 )
      goto LABEL_22;
    qword_1800B41A0 = *(_QWORD *)(*(_QWORD *)&qword_1800B41A8 + 2720LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800B41A0 + 8LL))(qword_1800B41A0);
    result = sub_18003F934(v7, &qword_1800B4320);
    v4 = result;
    if ( result >= 0 )
    {
      result = sub_18003F734();
      if ( result >= 0 )
      {
        result = sub_18003F5F8(v8, &unk_1800B4CF0);
        if ( result >= 0 )
        {
          v9 = *(_QWORD *)&qword_1800B41A8;
          result = sub_180045CFC();
          if ( (_BYTE)result )
          {
            v13[0] = sub_180062E70;
            v13[1] = sub_180062DD0;
            v13[2] = sub_180062E80;
            v13[3] = sub_180062EA0;
            v13[4] = sub_180062EC0;
            result = InitializeGameModeExtension(v13, v9);
          }
LABEL_12:
          if ( v4 >= 0 )
            goto LABEL_13;
          goto LABEL_24;
        }
      }
      v6 = result;
LABEL_22:
      v4 = v6 | 0x10000000;
      goto LABEL_12;
    }
  }
LABEL_24:
  v11 = *(_QWORD *)&qword_1800B41A8;
  if ( *(_QWORD *)&qword_1800B41A8 )
  {
    sub_180063764(*(_QWORD *)&qword_1800B41A8);
    result = sub_1800635C4(v11);
    *(_QWORD *)&qword_1800B41A8 = 0LL;
  }
  if ( v4 < 0 && qword_1800B4E98 )
  {
    result = sub_180083AFC();
    qword_1800B4E98 = 0LL;
  }
LABEL_13:
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    result = TlsSetValue(v10, 0LL);
  }
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
