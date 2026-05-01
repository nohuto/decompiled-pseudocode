/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180011C60 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x180011D08 (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x180011D40 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180011DD0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x1801AB0D8 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B87B8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801B87B8.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1801B8C28 (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801B917C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801B9D50 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801B9DD4 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801BC32C (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BC5DC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BD9FC (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING v8; // rcx
  int Boolean; // eax
  __int64 v10; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING *v15; // rbx
  HSTRING v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING *v20; // rbx
  HSTRING v21; // rcx
  int updated; // eax
  __int64 v23; // rdx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v25; // rax
  const WCHAR *v26; // rax
  unsigned __int8 v28[8]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h]
  HSTRING *v31; // [rsp+48h] [rbp-B8h] BYREF
  struct IInspectable *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING *v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  HSTRING *v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+78h] [rbp-88h]
  HSTRING v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h]
  _QWORD v42[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v42,
    (__int64)"ExperienceManager_OnViewPropertiesChanging");
  v42[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v42);
  v33 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         (__int64)&v33);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v38 = 0LL;
    v39 = 0;
    v6 = v33;
    v7 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v33 + 48LL);
    v31 = &v38;
    v32 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsQuickConnectViewServiceReady",
      0x1Fu,
      0x1Eu);
    v7(v6, v41, &v32);
    v41 = 0LL;
    RoVariant::RoVariant((RoVariant *)&string, v32);
    v8 = v38;
    v38 = string;
    string = v8;
    LODWORD(v8) = v39;
    v39 = v30;
    v30 = (int)v8;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v38 )
    {
      v28[0] = 0;
      v31 = (HSTRING *)v38;
      LODWORD(v32) = v39;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v31, v28);
      v5 = Boolean;
      if ( Boolean < 0 )
      {
        v10 = 692LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Boolean);
LABEL_30:
        RoVariant::~RoVariant((RoVariant *)&v38);
        goto LABEL_31;
      }
      if ( v28[0] )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v42);
        v12 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
        Boolean = CoreQueryWindowService(
                    v12,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    (char *)this + 272);
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v10 = 705LL;
          goto LABEL_11;
        }
        Boolean = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v10 = 708LL;
          goto LABEL_11;
        }
      }
    }
    v36 = 0LL;
    v37 = 0;
    v13 = v33;
    v14 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v33 + 48LL);
    v31 = (HSTRING *)&v36;
    v32 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Title", 6u, 5u);
    v14(v13, v41, &v32);
    v41 = 0LL;
    v15 = v31;
    RoVariant::RoVariant((RoVariant *)&string, v32);
    v16 = *v15;
    *v15 = string;
    string = v16;
    LODWORD(v16) = *((_DWORD *)v15 + 2);
    *((_DWORD *)v15 + 2) = v30;
    v30 = (int)v16;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v36 )
    {
      v31 = v36;
      LODWORD(v32) = v37;
      WindowsDeleteString(*((HSTRING *)this + 41));
      *((_QWORD *)this + 41) = 0LL;
      v17 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v31, (HSTRING *)this + 41);
      v5 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
LABEL_29:
        RoVariant::~RoVariant((RoVariant *)&v36);
        goto LABEL_30;
      }
    }
    v34 = 0LL;
    v35 = 0;
    v18 = v33;
    v19 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v33 + 48LL);
    v31 = (HSTRING *)&v34;
    v32 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"EventType", 0xAu, 9u);
    v19(v18, v41, &v32);
    v41 = 0LL;
    v20 = v31;
    RoVariant::RoVariant((RoVariant *)&string, v32);
    v21 = *v20;
    *v20 = string;
    string = v21;
    LODWORD(v21) = *((_DWORD *)v20 + 2);
    *((_DWORD *)v20 + 2) = v30;
    v30 = (int)v21;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v34 )
    {
      string = 0LL;
      v31 = v34;
      LODWORD(v32) = v35;
      WindowsDeleteString(0LL);
      string = 0LL;
      updated = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v31, &string);
      v5 = updated;
      if ( updated < 0 )
      {
        v23 = 728LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
LABEL_28:
        RoVariant::~RoVariant((RoVariant *)&v34);
        goto LABEL_29;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v42);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v23 = 733LL;
          goto LABEL_21;
        }
      }
      else
      {
        v25 = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(v25, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 368) = 1;
        }
        else
        {
          v26 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v26, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 368) = 0;
        }
      }
      WindowsDeleteString(string);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v42);
    v5 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v42);
  return v5;
}
