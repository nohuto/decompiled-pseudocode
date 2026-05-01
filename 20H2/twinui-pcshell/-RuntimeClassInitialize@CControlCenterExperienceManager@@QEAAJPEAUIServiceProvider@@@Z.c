/*
 * XREFs of ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B4E7C
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B2F1C (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x1801B1EDC (-TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x1801B3630 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B5368 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180473C38 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180473CF4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180474BF4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804762A0 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CControlCenterExperienceManager::RuntimeClassInitialize(
        CControlCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r13
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // r15
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int ready; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v16; // r12
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v17; // r8
  const unsigned __int16 *v18; // rcx
  __int64 v19; // r8
  int UndockedShellAppId; // eax
  unsigned int v21; // r8d
  HSTRING v22; // rbx
  __int64 v23; // rdx
  HSTRING_HEADER *v24; // rax
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v27; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v28; // [rsp+58h] [rbp-28h] BYREF
  HSTRING v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = (CControlCenterExperienceManager *)((char *)this + 104);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v5 = v27;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v28,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v29,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v9 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            (char *)this + 424);
  v12 = ready;
  if ( ready >= 0 )
  {
    ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 53) + 32LL))(
              *((_QWORD *)this + 53),
              ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
              (char *)this + 432);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 187LL;
      goto LABEL_21;
    }
    v14 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v14)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              (char *)this + 464);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 189LL;
      goto LABEL_21;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 58) + 24LL))(
              *((_QWORD *)this + 58),
              ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
              (char *)this + 448);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 190LL;
      goto LABEL_21;
    }
    v15 = a2->lpVtbl->QueryService;
    v16 = (_QWORD *)((char *)this + 456);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (char *)this + 456);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 194LL;
      goto LABEL_21;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v16 + 24LL))(
              *v16,
              0LL,
              ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
              (char *)this + 440);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 196LL;
      goto LABEL_21;
    }
    ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v16 + 24LL))(
              *v16,
              26LL,
              ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
              (char *)this + 444);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 197LL;
      goto LABEL_21;
    }
    ready = CControlCenterExperienceManager::SubscribeToShellReadyWnf(this);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 199LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
    ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
              (ExperienceManagerUtils *)a2,
              (struct IServiceProvider *)this + 12,
              v17);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 200LL;
      goto LABEL_21;
    }
    string = 0LL;
    UndockedShellAppId = TryGetUndockedShellAppId(v18, &string, v19);
    v12 = UndockedShellAppId;
    v22 = string;
    if ( UndockedShellAppId >= 0 )
    {
      if ( string
        && (UndockedShellAppId = CSingleViewShellExperience::AddSideBySideAumid(v4, string),
            v12 = UndockedShellAppId,
            UndockedShellAppId < 0) )
      {
        v23 = 206LL;
      }
      else
      {
        v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_1804CEFD0, v21);
        UndockedShellAppId = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v24[1].Reserved.Reserved1);
        v12 = UndockedShellAppId;
        if ( UndockedShellAppId >= 0 )
        {
          v9 = 0;
          hstringHeader.Reserved.Reserved2[8] = 0;
          v12 = 0;
LABEL_31:
          if ( v22 )
            WindowsDeleteString(v22);
          goto LABEL_33;
        }
        v23 = 208LL;
      }
    }
    else
    {
      v23 = 203LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)UndockedShellAppId);
    goto LABEL_31;
  }
  v13 = 186LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)ready);
LABEL_33:
  if ( v9 )
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
  return v12;
}
