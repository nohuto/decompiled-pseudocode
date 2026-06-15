/*
 * XREFs of sub_1800DB2B4 @ 0x1800DB2B4
 * Callers:
 *     sub_1800DC4F8 @ 0x1800DC4F8 (sub_1800DC4F8.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DD6D0 @ 0x1800DD6D0 (sub_1800DD6D0.c)
 */

// Hidden C++ exception states: #wind=8
_BOOL8 __fastcall sub_1800DB2B4(__int64 a1)
{
  BOOL v2; // esi
  HRESULT v3; // ebx
  void (__fastcall ***v4)(_QWORD, __int64, __int64 *); // rcx
  __int64 v5; // r8
  WCHAR *v6; // rcx
  WCHAR v7; // ax
  WCHAR *v8; // rax
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp-78h] BYREF
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  WCHAR SubKey[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  ppv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v2 = 0;
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  v3 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &unk_18015B078,
           23LL,
           0LL,
           &v18);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v17);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 80LL))(v17, &pv);
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v16);
          if ( v3 >= 0 )
          {
            v4 = v11;
            if ( v11 != v16 )
            {
              sub_18002BB14((__int64 *)&v11, v16, (__int64)&unk_18015BB48);
              v4 = v11;
            }
            if ( v4 )
            {
              v3 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), __int64 *))(*v4)[3])(
                     v4,
                     &v14);
              if ( v3 >= 0 )
              {
                v3 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v14)(v14, &unk_18015E390, &v15);
                if ( v3 >= 0 )
                {
                  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v13);
                  if ( v3 >= 0 )
                  {
                    v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                           v13,
                           &unk_18016D4F0,
                           pvar);
                    if ( v3 >= 0 && LOWORD(pvar[0]) == 31 )
                    {
                      pcbData = 520;
                      v5 = 260LL;
                      v6 = SubKey;
                      do
                      {
                        if ( v5 == -2147483386 )
                          break;
                        v7 = *(WCHAR *)((char *)v6
                                      + (char *)L"SYSTEM\\CurrentControlSet\\Control\\Class\\"
                                      - (char *)SubKey);
                        if ( !v7 )
                          break;
                        *v6++ = v7;
                        --v5;
                      }
                      while ( v5 );
                      v8 = v6 - 1;
                      if ( v5 )
                        v8 = v6;
                      *v8 = 0;
                      v3 = v5 == 0 ? 0x8007007A : 0;
                      if ( v5 )
                      {
                        v3 = sub_1800DD6D0(SubKey, 520LL, pvar[1]);
                        if ( v3 >= 0 && !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, &pcbData) )
                          v2 = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v3 = -2147467262;
            }
          }
        }
      }
    }
  }
  PropVariantClear(pvar);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v3 < 0 )
    sub_18005E8F8((__int64)"EndpointRequiresAC97VistaShim", 5313, v3);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v11 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v11)[2])(v11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v2;
}
