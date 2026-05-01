/*
 * XREFs of ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800B5408
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800B51D4 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A538 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039693C (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 */

__int64 __fastcall CAltTabViewController::RuntimeClassInitialize(
        CAltTabViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct IApplicationViewCollection *a6,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a7,
        struct ITabViewManager *a8)
{
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 40);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 56);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 136);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, (__int64)a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 80);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a8);
  v10 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
          (char *)this + 136,
          (char *)this + 144);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)(unsigned int)v10);
  return v11;
}
