/*
 * XREFs of ?_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009DC98
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009D468 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewChangedArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@5678@@Z@Z @ 0x180099A98 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@5678@@Z@Z @ 0x180099B18 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_180099B18.c)
 *     ??$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x18009A048 (--$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Exp.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellFeedsExperienceManagerImpl::_CreateShellExperienceView(ShellFeedsExperienceManagerImpl *this)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  _QWORD *v4; // r14
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); // rdi
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rdi
  int v15; // eax
  __int128 v16; // [rsp+38h] [rbp-79h] BYREF
  int v17[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v18; // [rsp+58h] [rbp-59h] BYREF
  int v19[2]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v20; // [rsp+78h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-29h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-11h]
  HSTRING_HEADER v23; // [rsp+A8h] [rbp-9h] BYREF
  HSTRING_HEADER v24; // [rsp+C8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v17[0] = 4;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ShellFeeds",
    0x2Cu,
    0x2Bu);
  *(_QWORD *)v19 = v22;
  *(_QWORD *)&v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &v23,
                      (const WCHAR **)off_180497D68,
                      v2)[1].Reserved.Reserved1;
  *(_QWORD *)&v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &v24,
                      (const WCHAR **)off_180497D70,
                      v3)[1].Reserved.Reserved1;
  *(_QWORD *)&v18 = *((_QWORD *)this + 6);
  v4 = (_QWORD *)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::ShellFeeds::ShellFeedsShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 13,
         &v18,
         &v16,
         &v20,
         v19,
         v17);
  if ( v6 < 0 )
  {
    v7 = 581LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v4;
  v10 = **(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  v6 = v10(v9, &GUID_971d912c_a63c_48d9_893e_d169202f1979, (char *)this + 96);
  if ( v6 < 0 )
  {
    v7 = 583LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v18 = ShellFeedsExperienceManagerImpl::_OnViewChangedHandler;
  DWORD2(v18) = 0;
  v16 = v18;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>(
    &v18,
    (__int64)this,
    &v16);
  v11 = v18;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v4 + 152LL))(*v4, v18, (char *)this + 112);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v16 = ShellFeedsExperienceManagerImpl::_OnViewEventHandler;
    DWORD2(v16) = 0;
    v20 = v16;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>(
      &v16,
      (__int64)this,
      &v20);
    v14 = v16;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v4 + 168LL))(*v4, v16, (char *)this + 120);
    v13 = v15;
    if ( v15 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v13;
}
