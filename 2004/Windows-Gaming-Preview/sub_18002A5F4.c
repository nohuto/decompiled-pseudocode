/*
 * XREFs of sub_18002A5F4 @ 0x18002A5F4
 * Callers:
 *     sub_180028818 @ 0x180028818 (sub_180028818.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180025CF8 @ 0x180025CF8 (sub_180025CF8.c)
 *     sub_180034F94 @ 0x180034F94 (sub_180034F94.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002A5F4(const WCHAR *a1, _QWORD *a2)
{
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rbx
  HSTRING_HEADER *v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-29h] BYREF
  __int64 v15; // [rsp+28h] [rbp-21h] BYREF
  __int64 v16; // [rsp+30h] [rbp-19h] BYREF
  const WCHAR *v17; // [rsp+38h] [rbp-11h] BYREF
  HSTRING string; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  HSTRING_HEADER v20; // [rsp+60h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  v17 = a1;
  if ( WindowsCreateStringReference(L"Windows.Storage.StorageFile", 0x1Bu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v16 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &unk_180051040, &v16);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v5 = v16;
    v6 = sub_180025CF8(&v20, &v17);
    v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           v6[1].Reserved.Reserved1,
           &v14);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v15 = 0LL;
      v8 = v14;
      v4 = sub_180034F94(v14);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v15);
      if ( v4 >= 0 )
      {
        v10 = v15;
        v9 = 0LL;
        v15 = 0LL;
        *a2 = v10;
        v4 = 0;
      }
      else
      {
        sub_180003268(retaddr, 1093, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
        v9 = v15;
      }
      if ( v9 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      sub_180003268(retaddr, 1090, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      1087,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      ActivationFactory);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}
