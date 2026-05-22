/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180120AA0
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180120740 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800222C4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBC1C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18011D770 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x18011FFA0 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x1801216C8 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180121874 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180123434 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x1801246B4 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  HKEY v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *); // rsi
  int v16; // eax
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v18; // eax
  HKEY v19; // rcx
  HKEY v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v26; // [rsp+48h] [rbp+10h] BYREF

  v26 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v26);
  v2 = CoreUICreate(&v26);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 240LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_24;
  }
  v5 = v26;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v26 + 136LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 36);
  v2 = v6(v5, ControllerProcessor::OnAutoRepeatTimerStatic, this, (char *)this + 288);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 245LL;
    goto LABEL_5;
  }
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 1248));
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 5928));
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  v7 = (HKEY)*((_QWORD *)this + 966);
  if ( v7 )
  {
    *((_QWORD *)this + 966) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v7 + 16LL))(v7);
  }
  RegistryWatcher::Create(
    v7,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    this,
    (void (*)(void *, HKEY))lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 966);
  v8 = v26;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v26 + 136LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 37);
  v10 = v9(v8, ControllerProcessor::OnSendGameControllerAsPointerAndManipulationStatic, this, (char *)this + 296);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      266LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = v26;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v26 + 136LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 958);
  v13 = v12(v11, lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_, this, (char *)this + 7664);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      274LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = v26;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *))(*(_QWORD *)v26 + 136LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 959);
  v16 = v15(v14, lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_, this, (char *)this + 7672);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      282LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v18 = ControllerNavigationManager::RegisterControllerProcessor(
          ControllerNavigationManager,
          **((_DWORD **)this + 5),
          this);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      284LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  v19 = (HKEY)*((_QWORD *)this + 967);
  if ( v19 )
  {
    *((_QWORD *)this + 967) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v19 + 16LL))(v19);
  }
  RegistryWatcher::Create(
    v19,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    this,
    (void (*)(void *, HKEY))lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 967);
  if ( IsEdition(8778LL) )
  {
    ControllerProcessor::UpdateControllerNavigationMode(this);
    v20 = (HKEY)*((_QWORD *)this + 968);
    if ( v20 )
    {
      *((_QWORD *)this + 968) = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v20 + 16LL))(v20);
    }
    RegistryWatcher::Create(
      v20,
      L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
      this,
      (void (*)(void *, HKEY))lambda_b5dea4f4b779368f4d35b9f1e7c211f6_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 968);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 969);
    v23 = ViewMenuChordedKeyHandler::Create(v21, this, v22, (char *)this + 7752);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        320LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
  }
  v3 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v26);
  return v3;
}
