/*
 * XREFs of sub_1800EC128 @ 0x1800EC128
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sprintf_s @ 0x18006ACB4 (sprintf_s.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800EC128(IID *rclsid, __int64 a2, GUID *a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  LSTATUS v10; // eax
  int v11; // eax
  HRESULT v12; // eax
  int v13; // edx
  int v14; // r9d
  LPOLESTR lpsz; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C0h] BYREF
  LPCOLESTR v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  WCHAR SubKey[264]; // [rsp+60h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+298h] [rbp+198h]

  lpsz = 0LL;
  sub_18002A504((void **)&lpsz, 0LL);
  v6 = StringFromCLSID(rclsid, &lpsz);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v6;
    v9 = 187;
LABEL_5:
    sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v8);
    goto LABEL_23;
  }
  if ( sprintf_s(
         (char *const)SubKey,
         0x104uLL,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
         lpsz) == -1 )
  {
    v7 = -2147024774;
    v8 = -2147024774;
    v9 = 190;
    goto LABEL_5;
  }
  hKey = 0LL;
  v10 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
  v7 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84((int)retaddr, 193, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v10);
    goto LABEL_21;
  }
  v17 = 0LL;
  v11 = MMDevAPI_4(SubKey, 257LL, &v17);
  v7 = v11;
  if ( v11 >= 0 )
  {
    *(_OWORD *)v19 = 0LL;
    v20 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, LPCOLESTR *))(*(_QWORD *)v17 + 40LL))(v17, a2, v19);
    v7 = v12;
    if ( v12 >= 0 )
    {
      if ( LOWORD(v19[0]) != 31 )
      {
        v7 = -2147024809;
        v14 = -2147024809;
        v13 = 201;
LABEL_17:
        sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v14);
LABEL_19:
        PropVariantClear((PROPVARIANT *)v19);
        goto LABEL_20;
      }
      v12 = CLSIDFromString(v19[1], a3);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v7 = 0;
        goto LABEL_19;
      }
      v13 = 203;
    }
    else
    {
      v13 = 199;
    }
    v14 = v12;
    goto LABEL_17;
  }
  sub_18004BD84((int)retaddr, 196, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v11);
LABEL_20:
  sub_18000F708(&v17);
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
LABEL_23:
  if ( lpsz )
    CoTaskMemFree(lpsz);
  return v7;
}
