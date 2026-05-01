/*
 * XREFs of sub_180028B34 @ 0x180028B34
 * Callers:
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_1800191A8 @ 0x1800191A8 (sub_1800191A8.c)
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 *     sub_1800382D0 @ 0x1800382D0 (sub_1800382D0.c)
 *     sub_180038430 @ 0x180038430 (sub_180038430.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180028B34(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  HRESULT v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+60h] [rbp+30h] BYREF
  HSTRING v20; // [rsp+68h] [rbp+38h] BYREF
  HSTRING v21; // [rsp+70h] [rbp+40h] BYREF
  HSTRING v22; // [rsp+78h] [rbp+48h] BYREF

  v3 = a1[32];
  if ( v3 )
  {
    v4 = a1 + 26;
    v5 = a1[26];
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *v4 = 0LL;
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v7 = v6;
    if ( !v6 )
    {
      v8 = -2147024882;
LABEL_11:
      sub_180003268(retaddr, 573, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v8);
      return (unsigned int)v8;
    }
    v9 = v6 + 2;
    sub_180011A50(v6 + 2);
    v7[7] = 1LL;
    *v7 = off_18004C978;
    v7[1] = off_18004C958;
    *v9 = off_18004C910;
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
    *v7 = &off_18004D0C0;
    v7[1] = off_18004D050;
    *v9 = off_18004D008;
    v7[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v10 = v7[8];
    v7[8] = v3;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = sub_1800382D0(v7, &xmmword_180050F70, v4);
    sub_180038430(v7);
    if ( v8 < 0 )
      goto LABEL_11;
    return 0LL;
  }
  v12 = a1[35];
  if ( v12 && a1[36] )
  {
    LOBYTE(a2) = 1;
    v13 = sub_18003A1A4(v12, a2);
    v14 = *(_QWORD *)(v13 + 16);
    if ( *(_DWORD *)(v14 + 20) == 1 )
    {
      v20 = 0LL;
      v15 = sub_1800191A8(&v20, (const WCHAR **)(v14 + 24));
      v8 = v15;
      if ( v15 < 0 )
      {
        sub_180003268(retaddr, 582, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
LABEL_20:
        WindowsDeleteString(v20);
        return (unsigned int)v8;
      }
      string = 0LL;
      v17 = *(_OWORD *)v13;
      WindowsDeleteString(0LL);
      string = 0LL;
      sub_180016730(a1[36], &v17, 23LL, &string);
      v21 = v20;
      v22 = string;
      v16 = sub_18002CF54(a1 + 26, &v22, &v21);
      v8 = v16;
      if ( v16 < 0 )
      {
        sub_180003268(retaddr, 594, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v16);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_20;
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v20);
    }
    return 0LL;
  }
  sub_180003268(retaddr, 599, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", -2147418113);
  return 2147549183LL;
}
