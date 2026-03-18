/*
 * XREFs of ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0127FA4
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124FF0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014BC90 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkGetDisplayModeList @ 0x1C015CB40 (DxgkGetDisplayModeList.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020899C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02911A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsRemoteSessionUsingWddmMonitors(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
    return 0LL;
  v3 = *((_QWORD *)Current + 11);
  if ( !v3 )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v3 + 224))(0LL, 0LL, &v5);
  return v5;
}
