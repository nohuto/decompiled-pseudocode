/*
 * XREFs of ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D9900
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801D6218 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804745F8 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180475594 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180476CEC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::RuntimeClassInitialize(
        CJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // rdi
  HSTRING v5; // rbx
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  HSTRING_HEADER *v10; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v17)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int HostExperiencePriorityManipulator; // eax
  __int64 v22; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v23; // r8
  ExperienceManagerUtils *v24; // [rsp+30h] [rbp-29h] BYREF
  __int64 v25; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER v26; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v27; // [rsp+58h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING v29; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (CJumpViewExperienceManager *)((char *)this + 152);
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  v5 = v29;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v27,
         v5);
  if ( v6 < 0 )
  {
    v8 = 199LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)off_1804D0080, v7);
  v6 = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v10[1].Reserved.Reserved1);
  if ( v6 < 0 )
  {
    v8 = 200LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)this + 126);
  v25 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          &v25);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v25 + 24LL))(
            v25,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 416);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 205LL;
      goto LABEL_22;
    }
    v15 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 48);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v15)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (char *)this + 384);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 207LL;
      goto LABEL_22;
    }
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 48);
    v17 = **v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
    v12 = v17(v16, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 392);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 208LL;
      goto LABEL_22;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 49) + 24LL))(
            *((_QWORD *)this + 49),
            ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
            (char *)this + 408);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 209LL;
      goto LABEL_22;
    }
    v18 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 400);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 211LL;
      goto LABEL_22;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 50) + 24LL))(
            *((_QWORD *)this + 50),
            0LL,
            ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
            (char *)this + 412);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 212LL;
      goto LABEL_22;
    }
    v19 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
            a2,
            &IID_IRealmActivationHistory,
            &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
            (char *)this + 376);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 214LL;
      goto LABEL_22;
    }
    v24 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, ExperienceManagerUtils **))v20)(
                                          a2,
                                          &unk_180530E30,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &v24);
    v13 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            v24,
                                            (CJumpViewExperienceManager *)((char *)this + 144),
                                            v23);
      v13 = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 46, (__int64)a2);
        v13 = 0;
        goto LABEL_29;
      }
      v22 = 219LL;
    }
    else
    {
      v22 = 217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_30;
  }
  v14 = 204LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v13;
}
