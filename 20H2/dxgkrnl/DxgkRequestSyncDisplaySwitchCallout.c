/*
 * XREFs of DxgkRequestSyncDisplaySwitchCallout @ 0x1C026B134
 * Callers:
 *     ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0214CE0 (-DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02C88A0 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0266E98 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C026A2E8 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall DxgkRequestSyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  DISPLAY_CALLOUT_ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  __int64 v12; // rax
  struct DXGGLOBAL *Global; // rax

  v6 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v6 )
    v11 = (char *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v6, a1, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    return DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout((struct DXGGLOBAL *)((char *)Global + 1704), v11, a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = 805LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
}
