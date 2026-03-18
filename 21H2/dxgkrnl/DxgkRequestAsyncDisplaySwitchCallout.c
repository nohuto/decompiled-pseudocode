/*
 * XREFs of DxgkRequestAsyncDisplaySwitchCallout @ 0x1C030D550
 * Callers:
 *     DxgkSessionConnected @ 0x1C01DA9B0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01F2CB0 (DxgkSessionReconnected.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C02C3624 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C030A9C4 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030CB8C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0389190 (DpiFdoExcludeAdapterAccess.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C0392870 (DpiIndirectCbForceDisplaySwitch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0308F0C (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C030CFCC (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall DxgkRequestAsyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  DISPLAY_CALLOUT_ENTRY *v7; // rax
  struct DISPLAY_CALLOUT_ENTRY *v8; // rbx
  struct DXGGLOBAL *Global; // rax

  v7 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, 256LL, a4);
  if ( v7 && (v8 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v7, a1, a2)) != 0LL )
  {
    Global = DXGGLOBAL_GetGlobal();
    return DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE ***)Global + 234, v8, a3);
  }
  else
  {
    WdLogSingleEntry1(6LL, 803LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dispaly switch callout.",
      803LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
