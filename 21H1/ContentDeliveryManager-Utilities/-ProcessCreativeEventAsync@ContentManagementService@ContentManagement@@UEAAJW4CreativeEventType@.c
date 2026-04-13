/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002C730
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002CBE0 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800241C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024260 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProce.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18002C56C (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     _lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_ @ 0x18002CB10 (_lambda_b4e7505319051468c039db95bcc1cb18_--__lambda_b4e7505319051468c039db95bcc1cb18_.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_b4e7505319051468c039db95bcc1cb18___ @ 0x180038F08 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v10; // rbx
  HRESULT v11; // eax
  int v12; // esi
  HSTRING v13; // r13
  HRESULT v14; // eax
  HSTRING v15; // r12
  HRESULT v16; // eax
  HSTRING v17; // r15
  HRESULT v18; // eax
  ContentManagement *StringRawBuffer; // rax
  struct ContentManagement::ICreativeEventReportedCache **v20; // r8
  int EventCacheIfNeeded; // eax
  __int64 v22; // r8
  HSTRING v23; // rdi
  volatile signed __int64 *v24; // rbx
  HSTRING newString; // [rsp+28h] [rbp-D9h] BYREF
  int v27; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v28; // [rsp+34h] [rbp-CDh]
  HSTRING v29; // [rsp+40h] [rbp-C1h]
  __int64 v30; // [rsp+48h] [rbp-B9h]
  HSTRING v31; // [rsp+50h] [rbp-B1h]
  __int64 v32; // [rsp+58h] [rbp-A9h]
  HSTRING v33; // [rsp+60h] [rbp-A1h]
  __int64 v34; // [rsp+68h] [rbp-99h]
  HSTRING v35; // [rsp+70h] [rbp-91h]
  __int64 v36; // [rsp+78h] [rbp-89h]
  _QWORD v37[2]; // [rsp+80h] [rbp-81h] BYREF
  int v38; // [rsp+90h] [rbp-71h]
  HSTRING v39; // [rsp+98h] [rbp-69h]
  char v40; // [rsp+A0h] [rbp-61h]
  HSTRING v41; // [rsp+A8h] [rbp-59h]
  char v42; // [rsp+B0h] [rbp-51h]
  HSTRING v43; // [rsp+B8h] [rbp-49h]
  char v44; // [rsp+C0h] [rbp-41h]
  HSTRING v45; // [rsp+C8h] [rbp-39h]
  char v46; // [rsp+D0h] [rbp-31h]
  __int64 v47; // [rsp+D8h] [rbp-29h]
  HSTRING v48; // [rsp+E0h] [rbp-21h]
  __int64 v49; // [rsp+E8h] [rbp-19h]
  __int64 v50; // [rsp+F0h] [rbp-11h]
  __int64 v51; // [rsp+F8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+3Fh]
  HSTRING v55; // [rsp+158h] [rbp+57h]

  v49 = -2LL;
  v10 = 0LL;
  LOBYTE(v34) = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_40;
  }
  v10 = newString;
  v55 = newString;
  v33 = newString;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  LOBYTE(v36) = 0;
  v14 = WindowsDuplicateString(a4, &newString);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = newString;
    v35 = newString;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    v29 = 0LL;
    LOBYTE(v30) = 0;
    if ( string )
    {
      v16 = WindowsDuplicateString(string, &newString);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v16);
LABEL_34:
        if ( v15 )
          WindowsDeleteString(v15);
        goto LABEL_37;
      }
      v15 = newString;
      v29 = newString;
      WindowsDeleteString(0LL);
    }
    v17 = 0LL;
    v31 = 0LL;
    LOBYTE(v32) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &newString);
      v12 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_32:
        if ( v17 )
          WindowsDeleteString(v17);
        goto LABEL_34;
      }
      v17 = newString;
      v31 = newString;
      WindowsDeleteString(0LL);
    }
    newString = 0LL;
    StringRawBuffer = (ContentManagement *)WindowsGetStringRawBuffer(v13, 0LL);
    EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(
                           StringRawBuffer,
                           (const unsigned __int16 *)&newString,
                           v20);
    v12 = EventCacheIfNeeded;
    v23 = newString;
    if ( EventCacheIfNeeded >= 0 )
    {
      v50 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v24 = (volatile signed __int64 *)(a1 - 48);
      v51 = a1 - 48;
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(a1 - 48);
      v37[0] = a1 - 48;
      v37[1] = a1 - 48;
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef((__int64)v24);
      v38 = a2;
      v39 = v55;
      v33 = 0LL;
      v40 = 0;
      LOBYTE(v34) = 1;
      v41 = v13;
      v13 = 0LL;
      v35 = 0LL;
      v42 = 0;
      LOBYTE(v36) = 1;
      v43 = v15;
      v15 = 0LL;
      v29 = 0LL;
      v44 = 0;
      LOBYTE(v30) = 1;
      v45 = v17;
      v17 = 0LL;
      v31 = 0LL;
      v46 = 0;
      LOBYTE(v32) = 1;
      v47 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v48 = v23;
      if ( v23 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 8LL))(v23);
      v27 = 3;
      v28 = 130LL;
      v12 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_b4e7505319051468c039db95bcc1cb18___(
              &v27,
              a9,
              v22,
              v37);
      lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_(v37);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v24);
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
      v10 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)EventCacheIfNeeded);
    }
    if ( v23 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v14);
LABEL_37:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_40:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
