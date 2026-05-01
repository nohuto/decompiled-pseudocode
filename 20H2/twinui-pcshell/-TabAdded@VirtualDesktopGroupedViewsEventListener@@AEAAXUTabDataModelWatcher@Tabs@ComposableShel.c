/*
 * XREFs of ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x18044B980
 * Callers:
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x18044AEA8 (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801F2964 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F20C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18044A97C (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@impl@winrt@@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopGroupedViewsEventListener::TabAdded(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, __int64, __int64 *); // rdi
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+40h]
  __int64 *v16; // [rsp+90h] [rbp+48h]
  __int64 v17; // [rsp+98h] [rbp+50h] BYREF

  v16 = a3;
  v15 = a2;
  v17 = 0LL;
  v6 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
         a3,
         &v11);
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
    &v14,
    (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v6);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v11);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( v8(v7, v14, &v17) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 96) + 32LL))(*(_QWORD *)(a1 + 96), v12);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 48LL))(
           *(_QWORD *)(a1 + 88),
           v17,
           *(_QWORD *)(a1 + 72),
           *(_QWORD *)(a1 + 80));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        51LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
  }
  if ( v14 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v14);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( *a2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a3);
  return result;
}
