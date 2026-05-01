/*
 * XREFs of sub_1800285F8 @ 0x1800285F8
 * Callers:
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_1800295F0 @ 0x1800295F0 (sub_1800295F0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800285F8(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  LPOLESTR v7; // rbx
  LPOLESTR v8; // rcx
  LPOLESTR v9; // rcx
  __int64 v10; // rcx
  HSTRING *v11; // rdi
  LPOLESTR v12; // rsi
  unsigned __int64 v13; // rbx
  UINT32 v14; // edx
  const WCHAR *v15; // rcx
  LPOLESTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  IID rclsid; // [rsp+28h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 256);
  if ( v3 )
  {
    lpsz = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPOLESTR *))(*(_QWORD *)v3 + 48LL))(v3, &lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 478;
      goto LABEL_6;
    }
    v7 = lpsz;
    WindowsDeleteString(*(HSTRING *)(a1 + 240));
    *(_QWORD *)(a1 + 240) = 0LL;
    v4 = (*(__int64 (__fastcall **)(LPOLESTR, __int64))(*(_QWORD *)v7 + 56LL))(v7, a1 + 240);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 480;
LABEL_6:
      sub_180003268(retaddr, v6, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
      v8 = lpsz;
      if ( lpsz )
      {
        lpsz = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v5;
    }
    WindowsDeleteString(*(HSTRING *)(a1 + 232));
    *(_QWORD *)(a1 + 232) = 0LL;
    WindowsDuplicateString(*(HSTRING *)(a1 + 240), (HSTRING *)(a1 + 232));
    v9 = lpsz;
    if ( lpsz )
    {
      lpsz = 0LL;
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 280);
  if ( v10 && *(_QWORD *)(a1 + 288) )
  {
    LOBYTE(a2) = 1;
    rclsid = *(IID *)sub_18003A1A4(v10, a2);
    StringFromCLSID(&rclsid, &lpsz);
    v11 = (HSTRING *)(a1 + 232);
    v12 = lpsz;
    if ( lpsz )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( lpsz[v13] );
      if ( v13 > 0xFFFFFFFF )
        goto LABEL_19;
      WindowsDeleteString(*v11);
      v14 = v13;
      v15 = v12;
    }
    else
    {
      WindowsDeleteString(*v11);
      v14 = 0;
      v15 = &word_180051520;
    }
    *v11 = 0LL;
    WindowsCreateString(v15, v14, v11);
LABEL_19:
    CoTaskMemFree(lpsz);
    return 0LL;
  }
  v5 = -2147418113;
  sub_180003268(retaddr, 486, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", -2147418113);
  return v5;
}
