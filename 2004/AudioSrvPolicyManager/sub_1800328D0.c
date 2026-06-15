/*
 * XREFs of sub_1800328D0 @ 0x1800328D0
 * Callers:
 *     sub_180031150 @ 0x180031150 (sub_180031150.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_1800326F4 @ 0x1800326F4 (sub_1800326F4.c)
 *     sub_1800327E8 @ 0x1800327E8 (sub_1800327E8.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800328D0(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  int v8; // eax
  int v9; // r14d
  HKEY v10; // rsi
  RPC_STATUS v11; // eax
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  WCHAR *v19; // rbx
  LPVOID v20; // rax
  int v22; // edx
  int v23; // eax
  HKEY v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  int v27; // edx
  unsigned int v28; // [rsp+30h] [rbp-79h] BYREF
  __int64 v29; // [rsp+38h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+48h] [rbp-61h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-59h] BYREF
  char v33; // [rsp+59h] [rbp-50h]
  _QWORD *v34; // [rsp+60h] [rbp-49h]
  PCNZWCH lpString2; // [rsp+68h] [rbp-41h] BYREF
  HKEY hkey; // [rsp+70h] [rbp-39h] BYREF
  PCNZWCH lpString1; // [rsp+78h] [rbp-31h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-29h] BYREF
  WCHAR v39[12]; // [rsp+88h] [rbp-21h] BYREF
  WCHAR DstBuf[12]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = a4;
  v34 = a4;
  *a4 = 0LL;
  lpString2 = 0LL;
  pv = 0LL;
  v8 = sub_1800330EC((char *)DstBuf);
  v9 = v8;
  if ( v8 < 0 )
  {
    sub_180003AB0(
      retaddr,
      883,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      v8);
    goto LABEL_32;
  }
  v10 = 0LL;
  v11 = RpcImpersonateClient(0LL);
  if ( v11 )
  {
    v9 = sub_18000A4C0(
           retaddr,
           887,
           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
           v11);
    goto LABEL_30;
  }
  v33 = 1;
  hkey = 0LL;
  v12 = sub_180031C0C(a1, 0x20019u, 0, &hkey);
  v10 = hkey;
  if ( v12 < 0 )
  {
LABEL_28:
    v20 = pv;
    pv = 0LL;
    *v4 = v20;
    v9 = 0;
    goto LABEL_29;
  }
  v9 = sub_180032160(hkey, DstBuf, &lpString2);
  if ( v9 >= 0 )
  {
    ppv = 0LL;
    v13 = CoCreateInstance(&stru_180045658, 0LL, 0x17u, &riid, &ppv);
    v9 = v13;
    if ( v13 < 0 )
    {
      sub_180003AB0(
        retaddr,
        896,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        v13);
LABEL_63:
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      goto LABEL_29;
    }
    v31 = 0LL;
    v14 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v31);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 899;
LABEL_13:
      sub_180003AB0(
        retaddr,
        v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        v14);
LABEL_61:
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      goto LABEL_63;
    }
    v28 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 24LL))(v31, &v28);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 902;
      goto LABEL_13;
    }
    v16 = 0;
    if ( v28 )
    {
      while ( 1 )
      {
        v29 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 32LL))(v31, v16, &v29);
        v9 = v17;
        if ( v17 < 0 )
        {
          sub_180003AB0(
            retaddr,
            907,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            v17);
          goto LABEL_59;
        }
        lpString1 = 0LL;
        v18 = sub_1800326F4(v29, &lpString1);
        v9 = v18;
        v19 = (WCHAR *)lpString1;
        if ( v18 < 0 )
        {
          v22 = 910;
          goto LABEL_55;
        }
        if ( CompareStringW(0x7Fu, 1u, lpString1, -1, lpString2, -1) == 2 )
          break;
        if ( v19 )
          CoTaskMemFree(v19);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        if ( ++v16 >= v28 )
          goto LABEL_23;
      }
      v18 = MMDevAPI_21(v29, &pv);
      v9 = v18;
      if ( v18 < 0 )
      {
        v22 = 915;
LABEL_55:
        sub_180003AB0(
          retaddr,
          v22,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v18);
        goto LABEL_56;
      }
      hKey = 0LL;
      v23 = sub_180031C0C(a1, 0x2001Fu, 0, &hKey);
      v24 = hKey;
      if ( v23 >= 0 )
      {
        v25 = sub_1800330EC((char *)v39);
        v9 = v25;
        if ( v25 < 0 )
        {
          v27 = 924;
          goto LABEL_46;
        }
        v25 = sub_1800327E8(v26, v24, v39, (const BYTE *)pv);
        v9 = v25;
        if ( v25 < 0 )
        {
          v27 = 927;
          goto LABEL_46;
        }
      }
      v25 = sub_180031A54(a1, a3, a2, (__int64)pv);
      v9 = v25;
      if ( v25 >= 0 )
      {
        if ( v24 )
          RegCloseKey(v24);
        if ( v19 )
          CoTaskMemFree(v19);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_23:
        v4 = v34;
        goto LABEL_24;
      }
      v27 = 931;
LABEL_46:
      sub_180003AB0(
        retaddr,
        v27,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        v25);
      if ( v24 )
        RegCloseKey(v24);
LABEL_56:
      if ( v19 )
        CoTaskMemFree(v19);
LABEL_59:
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      goto LABEL_61;
    }
LABEL_24:
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    goto LABEL_28;
  }
LABEL_29:
  RpcRevertToSelf();
LABEL_30:
  if ( v10 )
    RegCloseKey(v10);
LABEL_32:
  if ( pv )
    CoTaskMemFree(pv);
  if ( lpString2 )
    CoTaskMemFree((LPVOID)lpString2);
  return (unsigned int)v9;
}
