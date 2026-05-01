/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UISwitchItemInternal@@V?$ComPtr@UISwitchItemInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1800B3FB0
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800B418C (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UISwitchItemInternal@@V?$ComPtr@UISwitchItemInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800B40F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UISwitchItemInternal@@V-$ComPtr@UISwitchItem.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<ISwitchItemInternal,Microsoft::WRL::ComPtr<ISwitchItemInternal>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<ISwitchItemInternal,Microsoft::WRL::ComPtr<ISwitchItemInternal>>::Iterator::GetCurrentObject();
  return a1;
}
