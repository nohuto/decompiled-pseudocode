/*
 * XREFs of LogMonitorOnOffTelemetry @ 0x1C01767E4
 * Callers:
 *     ?ScreenOnStudyStopCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001FE10 (-ScreenOnStudyStopCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ScreenOnStudyStartCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0020F20 (-ScreenOnStudyStartCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B0660 (-DisplayTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0176864 (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

__int64 __fastcall LogMonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]

  v11 = a2;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *(_DWORD *)(a2 + 200) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 2696);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 96);
      if ( v8 )
      {
        LOBYTE(v6) = a3;
        MONITOR_MGR::_MonitorOnOffTelemetry(v8, a1, v6);
      }
    }
  }
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return 0LL;
}
