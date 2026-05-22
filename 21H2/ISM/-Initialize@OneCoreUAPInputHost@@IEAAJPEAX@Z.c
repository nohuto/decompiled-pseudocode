/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001EEF8
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18001EB40 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180011D4C (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18001EC24 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F0BC (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180021B3C (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180021E48 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180027094 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18002AD84 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, void *a2)
{
  struct ISystemInputRouter **v3; // rdi
  int v4; // eax
  const char *v5; // r9
  struct ISystemInputRouter **v6; // r14
  int SystemInputRouter; // eax
  struct ISystemInputRouter *v8; // rcx
  struct ISystemInputRouter *v9; // rbx
  InputStateManager *v10; // rax
  InputStateManager *v11; // rsi
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  const char *v15; // r9
  struct ISystemInputRouter *v16; // rcx
  int v17; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  InputStateManager *v24; // [rsp+50h] [rbp+18h]

  v3 = (struct ISystemInputRouter **)OneCoreUAPInputHost::s_pInputHost;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v23);
  v4 = CoreUICreate(&v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v21);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), struct ISystemInputRouter **))(*(_QWORD *)v23 + 240LL))(
    v23,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    NtMITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  ISMStatics::GetForegroundManager();
  ISMStatics::GetInputSiteHierarchyManager();
  v6 = v3 + 5;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v3 + 5);
  SystemInputRouter = CreateSystemInputRouter(
                        a2,
                        (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64)),
                        v3 + 5);
  if ( SystemInputRouter < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)SystemInputRouter,
      v21);
    __debugbreak();
  }
  v8 = v3[6];
  if ( v8 )
  {
    v3[6] = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *v6;
  if ( !*v6 )
  {
    v13 = -2147024809;
    v19 = 223LL;
    goto LABEL_29;
  }
  v10 = (InputStateManager *)RefCountedObject::operator new(0xC8uLL);
  v24 = v10;
  if ( v10 )
    v11 = InputStateManager::InputStateManager(v10, v9);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v13 = -2147024882;
    v19 = 230LL;
LABEL_29:
    v20 = (unsigned int)v13;
    goto LABEL_30;
  }
  v12 = InputStateManager::Initialize(v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v3[6] = v11;
    v13 = 0;
    goto LABEL_14;
  }
  v20 = (unsigned int)v12;
  v19 = 233LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v20,
    v21);
LABEL_14:
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v13,
      v21);
    __debugbreak();
  }
  v14 = InputProviderManager::InitializeHelper(v3 + 7, v3[6], 0LL);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v14,
      v21);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v15);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v16 = v3[11];
    if ( v16 )
    {
      v3[11] = 0LL;
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = Win32kInterop::Create(v3[6], *v6, v3 + 11);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v17,
        v21);
      JUMPOUT(0x1800574C8LL);
    }
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v23);
  return 0LL;
}
