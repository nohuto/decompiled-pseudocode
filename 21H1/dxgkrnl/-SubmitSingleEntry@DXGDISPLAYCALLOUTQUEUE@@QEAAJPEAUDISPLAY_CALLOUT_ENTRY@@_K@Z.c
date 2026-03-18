/*
 * XREFs of ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0267838
 * Callers:
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210448 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021059C (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0267D40 (DxgkRequestAsyncDisplaySwitchCallout.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C02C1C44 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry(
        DXGDISPLAYCALLOUTQUEUE ***this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3)
{
  DXGDISPLAYCALLOUTQUEUE **v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v6 = this[6];
  if ( *v6 != (DXGDISPLAYCALLOUTQUEUE *)(this + 5) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 5;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  this[6] = (DXGDISPLAYCALLOUTQUEUE **)a2;
  if ( this[7]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, (__int64)v6), v7 = DpiGdiAsyncDisplayCallout(a3), v9 = v7, v7 >= 0) )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v6);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, (__int64)v6);
  return (unsigned int)v9;
}
