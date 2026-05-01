/*
 * XREFs of ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F65EC
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F62E4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007E538 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007E588 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18007E588.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIShellExperienceViewLifetime@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B582C (--$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@-$ComPtr@UIShellExperienceView@Experience@S.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1801B6830 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Exp_ea_1801B6830.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SearchAppExperienceManager::_CreateShellExperienceView(SearchAppExperienceManager *this)
{
  _QWORD *v2; // r12
  int v3; // ebx
  __int64 v4; // rdx
  _OWORD *v5; // rdi
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  _OWORD *v8; // r14
  int v9; // eax
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  char *v13; // rsi
  int v14; // eax
  int v16; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-71h] BYREF
  __int128 v18; // [rsp+50h] [rbp-59h] BYREF
  int v19[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-39h] BYREF
  __int64 v22; // [rsp+88h] [rbp-21h]
  HSTRING_HEADER v23; // [rsp+90h] [rbp-19h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-1h]
  HSTRING_HEADER v25; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v16 = 13;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.SearchApp",
    0x2Bu,
    0x2Au);
  *(_QWORD *)v19 = v22;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v23,
    L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI",
    0x29u,
    0x28u);
  v20 = v24;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v25,
    L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
    0x31u,
    0x30u);
  *(_QWORD *)v17 = v26;
  *(_QWORD *)&v18 = *((_QWORD *)this + 51);
  v2 = (_QWORD *)((char *)this + 512);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 64,
         &v18,
         v17,
         &v20,
         v19,
         &v16);
  if ( v3 < 0 )
  {
    v4 = 780LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::As<TwinUI::Cortana::IShellExperienceViewLifetime>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 64,
         (__int64 *)this + 63);
  if ( v3 < 0 )
  {
    v4 = 782LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v18 = SearchAppExperienceManager::_OnViewChangedHandler;
  DWORD2(v18) = 0;
  *(_QWORD *)v17 = this;
  *(_OWORD *)&v17[8] = v18;
  v5 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v6);
    v7[1] = *(_OWORD *)v17;
    *((_QWORD *)v7 + 4) = *(_QWORD *)&v17[16];
    *(_QWORD *)v7 = off_1804A3B78;
    v5 = v7;
    v8 = v7;
  }
  *(_QWORD *)&v18 = v5;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v8, (char *)this + 520);
  v3 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)v17 = SearchAppExperienceManager::_OnViewEventHandler;
    *(_DWORD *)&v17[8] = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)v17;
    v10 = 0LL;
    v11 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    v13 = 0LL;
    if ( v11 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v11);
      *(HSTRING_HEADER *)(v12 + 16) = hstringHeader;
      *(_QWORD *)v12 = off_1804A3B50;
      v10 = v12;
      v13 = v12;
    }
    *(_QWORD *)v17 = v10;
    v14 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v13, (char *)this + 528);
    v3 = v14;
    if ( v14 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x314,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    if ( v13 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v8 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v3;
}
