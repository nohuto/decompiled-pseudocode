/*
 * XREFs of ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800D148C
 * Callers:
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1800D15B0 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800D2ED8 (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02dbcb82931ed704d3fb9c9751306150___ @ 0x1800D0F18 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_02dbcb82931ed704d3fb9c9751306150.c)
 *     ??$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEAUITileStore@Tiles@456@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@3UI@456@AEA_K@winrt@@YA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@0@$$QEAPEAUIWICImagingFactory@@$$QEAPEAUITaskbarList4@@AEAUITileStore@Tiles@Internal@Windows@0@AEBUWindowTabDataModel@Shell@UI@670@AEBUWindowTabView@9UI@670@AEA_K@Z @ 0x1800D11E8 (--$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180223020 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
        __int64 a1,
        _QWORD *a2,
        struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a3,
        struct winrt::Windows::Internal::UI::Shell::WindowTabView *a4,
        ...)
{
  __int64 v8; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  struct IWICImagingFactory *v16[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v18; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+40h] BYREF

  va_start(va, a4);
  wil::handle_wait(*(wil **)(a1 + 32), (void *)0xFFFFFFFFLL, (unsigned int)a3);
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 64);
  v16[0] = *(struct IWICImagingFactory **)(a1 + 56);
  winrt::make_self<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,IWICImagingFactory *,ITaskbarList4 *,winrt::Windows::Internal::Tiles::ITileStore &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel const &,winrt::Windows::Internal::UI::Shell::WindowTabView const &,unsigned __int64 &>(
    &v18,
    v16,
    (struct ITaskbarList4 **)&v15,
    (const struct winrt::Windows::Internal::Tiles::ITileStore *)(a1 + 72),
    a3,
    a4,
    (unsigned __int64 *)va);
  v8 = *(_QWORD *)(a1 + 48);
  v16[0] = (struct IWICImagingFactory *)&v18;
  *(_QWORD *)&v15 = v8;
  *((_QWORD *)&v15 + 1) = v16;
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_02dbcb82931ed704d3fb9c9751306150___(
          v10,
          CurrentThreadId,
          &v15);
  v12 = v11;
  if ( v11 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v11);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( v13 )
      (*(void (__fastcall **)(__int64, winrt::Windows::Internal::Shell::implementation::TabProxyWindow *))(*(_QWORD *)v13 + 48LL))(
        v13,
        v18);
    *a2 = v18;
  }
  else
  {
    *a2 = 0LL;
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v18);
  }
  return a2;
}
