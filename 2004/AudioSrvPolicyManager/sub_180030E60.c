/*
 * XREFs of sub_180030E60 @ 0x180030E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_1800325C0 @ 0x1800325C0 (sub_1800325C0.c)
 *     sub_1800326F4 @ 0x1800326F4 (sub_1800326F4.c)
 *     sub_1800327E8 @ 0x1800327E8 (sub_1800327E8.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030E60(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  RPC_STATUS v8; // eax
  __int64 v9; // r8
  unsigned int v10; // esi
  char v11; // r13
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  void *v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  int v22; // [rsp+20h] [rbp-49h]
  HKEY hKey; // [rsp+30h] [rbp-39h] BYREF
  __int64 v24; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h]
  WCHAR ValueName[12]; // [rsp+50h] [rbp-19h] BYREF
  WCHAR v28[12]; // [rsp+68h] [rbp-1h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a1;
  v26 = a1;
  v8 = RpcImpersonateClient(0LL);
  if ( v8 )
    return (unsigned int)sub_18000A4C0(
                           retaddr,
                           113,
                           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecifi"
                                "cendpointinfo.cpp",
                           v8);
  hKey = 0LL;
  v11 = 1;
  LOBYTE(v9) = 1;
  v12 = sub_180031C0C(v4, 131103LL, v9, &hKey);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v12 = sub_1800330EC((char *)ValueName);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 121;
      goto LABEL_9;
    }
    v12 = sub_1800330EC((char *)v28);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 128;
      goto LABEL_9;
    }
    if ( a4 )
    {
      v24 = 0LL;
      if ( (int)MMDevAPI_23(a4, &v24) < 0 )
      {
        v10 = -2147024809;
        sub_180003AB0(
          retaddr,
          137,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          -2147024809);
LABEL_21:
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_34:
        if ( !v11 )
          goto LABEL_36;
        goto LABEL_35;
      }
      pv = 0LL;
      v14 = sub_1800326F4(v24, &pv);
      v16 = pv;
      v10 = v14;
      if ( v14 < 0 )
      {
        v17 = 142;
        goto LABEL_19;
      }
      v14 = sub_1800327E8(v15, hKey, v28, pv, a2);
      v10 = v14;
      if ( v14 < 0 )
      {
        v17 = 143;
        goto LABEL_19;
      }
      v14 = sub_1800327E8(v18, hKey, ValueName, a4, v22);
      v10 = v14;
      if ( v14 < 0 )
      {
        v17 = 146;
LABEL_19:
        sub_180003AB0(
          retaddr,
          v17,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v14);
        if ( v16 )
          CoTaskMemFree(v16);
        goto LABEL_21;
      }
      if ( v16 )
        CoTaskMemFree(v16);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v4 = v26;
    }
    else
    {
      RegDeleteValueW(hKey, ValueName);
      RegDeleteValueW(hKey, v28);
      v19 = sub_1800325C0(v4, a2, a3);
      v10 = v19;
      if ( v19 < 0 )
      {
        v20 = 155;
        goto LABEL_30;
      }
    }
    v11 = 0;
    RpcRevertToSelf();
    v19 = sub_180031A54(v4, a3, a2, a4);
    v10 = v19;
    if ( v19 >= 0 )
    {
      v10 = 0;
      goto LABEL_34;
    }
    v20 = 162;
LABEL_30:
    sub_180003AB0(
      retaddr,
      v20,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      v19);
    goto LABEL_34;
  }
  v13 = 117;
LABEL_9:
  sub_180003AB0(
    retaddr,
    v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    v12);
LABEL_35:
  RpcRevertToSelf();
LABEL_36:
  if ( hKey )
    RegCloseKey(hKey);
  return v10;
}
