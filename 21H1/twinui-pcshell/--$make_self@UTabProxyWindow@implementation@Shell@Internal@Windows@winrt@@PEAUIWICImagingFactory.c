/*
 * XREFs of ??$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEAUITileStore@Tiles@456@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@3UI@456@AEA_K@winrt@@YA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@0@$$QEAPEAUIWICImagingFactory@@$$QEAPEAUITaskbarList4@@AEAUITileStore@Tiles@Internal@Windows@0@AEBUWindowTabDataModel@Shell@UI@670@AEBUWindowTabView@9UI@670@AEA_K@Z @ 0x1800BD1C8
 * Callers:
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800BD46C (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800C11DC (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::TabProxyWindow **__fastcall winrt::make_self<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,IWICImagingFactory *,ITaskbarList4 *,winrt::Windows::Internal::Tiles::ITileStore &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel const &,winrt::Windows::Internal::UI::Shell::WindowTabView const &,unsigned __int64 &>(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow **a1,
        struct IWICImagingFactory **a2,
        struct ITaskbarList4 **a3,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a4,
        struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a5,
        struct winrt::Windows::Internal::UI::Shell::WindowTabView *a6,
        unsigned __int64 *a7)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v12; // [rsp+60h] [rbp+8h]

  v12 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)operator new(0xB0uLL);
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow(v12, *a2, *a3, a4, a5, a6, *a7);
  *(_QWORD *)v12 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)v12 + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)v12 + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  *a1 = v12;
  return a1;
}
