/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F1C8
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18001EE10 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180012104 (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18001EEF4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F3AC (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180021D5C (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180022068 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180027264 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18002ADD4 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18003D04C (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180138220 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, void *a2)
{
  struct OneCoreUAPInputHost *v3; // rdi
  int v4; // eax
  const char *v5; // r9
  struct ISystemInputRouter **v6; // r14
  char MPCInputPostProcessorPresent; // al
  struct ISystemInputRouter **v8; // r8
  struct IInputFocusListener *v9; // rdx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  struct ISystemInputRouter *v13; // rbx
  InputStateManager *v14; // rax
  InputStateManager *v15; // rsi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  const char *v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v28; // [rsp+40h] [rbp+8h] BYREF
  InputStateManager *v29; // [rsp+50h] [rbp+18h]

  v3 = OneCoreUAPInputHost::s_pInputHost;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
  v4 = CoreUICreate(&v28);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v26);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), struct OneCoreUAPInputHost *))(*(_QWORD *)v28 + 240LL))(
    v28,
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
  v6 = (struct ISystemInputRouter **)((char *)v3 + 40);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)v3 + 40);
  *((_QWORD *)v3 + 5) = 0LL;
  MPCInputPostProcessorPresent = IsGetMPCInputPostProcessorPresent();
  v8 = (struct ISystemInputRouter **)((char *)v3 + 40);
  v9 = (struct IInputFocusListener *)(((unsigned __int64)v3 + 8) & -(__int64)(v3 != 0LL));
  if ( MPCInputPostProcessorPresent )
  {
    v10 = MPCInputRouter::Create(a2, v9, v8);
    v11 = v10;
    if ( v10 >= 0 )
    {
LABEL_7:
      v11 = 0;
      goto LABEL_8;
    }
    v23 = 30LL;
  }
  else
  {
    v10 = DWMInputRouter::Create((struct IDWMInputProxy *)a2, v9, v8);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_7;
    v23 = 34LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
    (const char *)(unsigned int)v10,
    v26);
LABEL_8:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v11,
      v26);
    __debugbreak();
  }
  v12 = *((_QWORD *)v3 + 6);
  if ( v12 )
  {
    *((_QWORD *)v3 + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *v6;
  if ( !*v6 )
  {
    v17 = -2147024809;
    v24 = 221LL;
    goto LABEL_36;
  }
  v14 = (InputStateManager *)RefCountedObject::operator new(0xC0uLL);
  v29 = v14;
  if ( v14 )
    v15 = InputStateManager::InputStateManager(v14, v13);
  else
    v15 = 0LL;
  if ( !v15 )
  {
    v17 = -2147024882;
    v24 = 228LL;
LABEL_36:
    v25 = (unsigned int)v17;
    goto LABEL_37;
  }
  v16 = InputStateManager::Initialize(v15);
  v17 = v16;
  if ( v16 >= 0 )
  {
    *((_QWORD *)v3 + 6) = v15;
    v17 = 0;
    goto LABEL_17;
  }
  v25 = (unsigned int)v16;
  v24 = 231LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v25,
    v26);
LABEL_17:
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v17,
      v26);
    __debugbreak();
  }
  v18 = InputProviderManager::InitializeHelper((char *)v3 + 56, *((_QWORD *)v3 + 6), 0LL);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v18,
      v26);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v19);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v20 = *((_QWORD *)v3 + 11);
    if ( v20 )
    {
      *((_QWORD *)v3 + 11) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = Win32kInterop::Create(*((struct IRawInputClient **)v3 + 6), *v6, (struct Win32kInterop **)v3 + 11);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v21,
        v26);
      __debugbreak();
    }
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
  return 0LL;
}
