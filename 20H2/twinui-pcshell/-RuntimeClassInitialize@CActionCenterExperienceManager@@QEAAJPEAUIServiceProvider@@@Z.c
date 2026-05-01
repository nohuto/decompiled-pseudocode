/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B06C0
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801AD7C8 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1801AEDA0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801AF79C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801AFF84 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801B1CE4 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x1801B1EDC (-TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180473C38 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180473CF4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180474BF4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804762A0 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r13
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // r12
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING, _QWORD); // rdi
  int ready; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v18)(_QWORD, GUID *, char *); // rsi
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v22; // rsi
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v24; // r8
  const unsigned __int16 *v25; // rcx
  int UndockedShellAppId; // eax
  unsigned int v27; // r8d
  HSTRING v28; // rbx
  __int64 v29; // rdx
  HSTRING_HEADER *v30; // rax
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, char *); // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  HSTRING string; // [rsp+40h] [rbp-29h] BYREF
  HSTRING_HEADER v35; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v36; // [rsp+60h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-1h] BYREF
  HSTRING v38; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (CActionCenterExperienceManager *)((char *)this + 120);
  v38 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v5 = v38;
  v36 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v35,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v36,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v9 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  v33 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))QueryService)(
          a2,
          &unk_18052ED30,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          &v33);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v32 = 0LL;
    v13 = v33;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v33 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v35,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    ready = v14(v13, v36, &v32);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 251LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)ready);
LABEL_43:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      goto LABEL_44;
    }
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
    v18 = **v32;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 70);
    ready = v18(v17, &GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d, (char *)this + 560);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 253LL;
      goto LABEL_31;
    }
    v19 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
              a2,
              &IID_IImmersiveSessionIdleDetector,
              &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
              (char *)this + 456);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 255LL;
      goto LABEL_31;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 57) + 32LL))(
              *((_QWORD *)this + 57),
              ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
              (char *)this + 464);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 256LL;
      goto LABEL_31;
    }
    v20 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 64);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v20)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              (char *)this + 512);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 258LL;
      goto LABEL_31;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 64) + 24LL))(
              *((_QWORD *)this + 64),
              ((unsigned __int64)this + 72) & -(__int64)(this != 0LL),
              (char *)this + 500);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 259LL;
      goto LABEL_31;
    }
    v21 = a2->lpVtbl->QueryService;
    v22 = (_QWORD *)((char *)this + 504);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (char *)this + 504);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 263LL;
      goto LABEL_31;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v22 + 24LL))(
              *v22,
              0LL,
              ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
              (char *)this + 492);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 265LL;
      goto LABEL_31;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v22 + 24LL))(
              *v22,
              26LL,
              ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
              (char *)this + 496);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 266LL;
      goto LABEL_31;
    }
    v23 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v23)(
              a2,
              &IID_IRealmActivationHistory,
              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
              (char *)this + 520);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 268LL;
      goto LABEL_31;
    }
    ready = CActionCenterExperienceManager::SubscribeToShellReadyWnf(this);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 270LL;
      goto LABEL_31;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
    ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
              (ExperienceManagerUtils *)a2,
              (struct IServiceProvider *)this + 14,
              v24);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 271LL;
      goto LABEL_31;
    }
    ready = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
    v12 = ready;
    if ( ready < 0 )
    {
      v16 = 272LL;
      goto LABEL_31;
    }
    string = 0LL;
    UndockedShellAppId = TryGetUndockedShellAppId(v25, &string);
    v12 = UndockedShellAppId;
    v28 = string;
    if ( UndockedShellAppId >= 0 )
    {
      if ( string
        && (UndockedShellAppId = CSingleViewShellExperience::AddSideBySideAumid(v4, string),
            v12 = UndockedShellAppId,
            UndockedShellAppId < 0) )
      {
        v29 = 278LL;
      }
      else
      {
        v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)off_1804CEFC8, v27);
        UndockedShellAppId = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v30[1].Reserved.Reserved1);
        v12 = UndockedShellAppId;
        if ( UndockedShellAppId >= 0 )
        {
          *((_BYTE *)this + 568) = IsShellLauncherEnabledForCurrentUser(v31);
          v9 = 0;
          hstringHeader.Reserved.Reserved2[8] = 0;
          v12 = 0;
LABEL_41:
          if ( v28 )
            WindowsDeleteString(v28);
          goto LABEL_43;
        }
        v29 = 280LL;
      }
    }
    else
    {
      v29 = 275LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)UndockedShellAppId);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_44:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  if ( v9 )
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
  return v12;
}
