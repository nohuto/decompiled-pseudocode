/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1800A5DC4
 * Callers:
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5FEC (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009197C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800A619C (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F01AC (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180362EA4 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAltTabViewHost@@QEAA@XZ @ 0x18036B3A8 (--0CAltTabViewHost@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CAltTabViewHost **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IMultitaskingViewVisibilityServiceInternal **a6,
        struct IMultitaskingViewGestureState **a7,
        struct IApplicationViewCollection **a8,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a9,
        struct ITabViewManager **a10)
{
  CAltTabViewHost *v14; // rax
  int v15; // edi
  CAltTabViewHost *v16; // rbx
  struct IApplicationViewSwitcher *v17; // r9
  struct IMultitaskingViewManagerInternal *v18; // r8
  volatile int *v19; // rdx
  struct ITabViewManager *v21; // [rsp+48h] [rbp-30h]
  CAltTabViewHost *v22; // [rsp+50h] [rbp-28h] BYREF
  CAltTabViewHost *v23; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = (CAltTabViewHost *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v14;
  if ( v14 )
  {
    v16 = CAltTabViewHost::CAltTabViewHost(v14);
    v17 = *a4;
    v18 = *a3;
    v23 = 0LL;
    v21 = *a10;
    v22 = v16;
    v15 = CAltTabViewHost::RuntimeClassInitialize(v16, *a2, v18, v17, *a5, *a6, *a7, *a8, *a9, v21);
    if ( v15 >= 0 )
    {
      if ( v16 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CAltTabViewHost *)((char *)v16 + 132), v19);
      *a1 = v16;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&v22);
  }
  else
  {
    v15 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v23);
  return (unsigned int)v15;
}
