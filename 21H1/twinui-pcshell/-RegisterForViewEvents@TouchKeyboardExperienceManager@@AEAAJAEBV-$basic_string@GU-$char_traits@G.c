/*
 * XREFs of ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18032E298
 * Callers:
 *     _lambda_4072c03f0563dda202850bcb805fe733_::operator() @ 0x1800A12A0 (_lambda_4072c03f0563dda202850bcb805fe733_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1800939C8 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180121A4C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForViewEvents(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, char *, PVOID, _QWORD, _QWORD *); // r12
  const WCHAR *v13; // rax
  const WCHAR *v14; // r14
  unsigned __int64 v15; // rsi
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v18 = 0LL;
  v4 = a1[42];
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v6 = v5(v4, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, &v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v19 = TouchKeyboardExperienceManager::OnViewEvent;
    DWORD2(v19) = 0;
    hstringHeader.Reserved.Reserved1 = a1;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v19;
    v8 = 0LL;
    v9 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v9);
      *(HSTRING_HEADER *)(v10 + 16) = hstringHeader;
      *(_QWORD *)v10 = off_18047DA98;
      v8 = v10;
    }
    *(_QWORD *)&v19 = v8;
    v11 = v18;
    v12 = *(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, _QWORD *))(*(_QWORD *)v18 + 48LL);
    v13 = (const WCHAR *)std::wstring::c_str(a2);
    v14 = v13;
    v15 = -1LL;
    do
      ++v15;
    while ( v13[v15] );
    if ( v15 > 0xFFFFFFFF )
    {
      LODWORD(v15) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(
      v14,
      v15,
      (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
      (HSTRING *)&hstringHeader);
    v16 = v12(v11, v8, hstringHeader.Reserved.Reserved1, 0LL, a1 + 32);
    v7 = v16;
    if ( v16 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A1,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v7;
}
