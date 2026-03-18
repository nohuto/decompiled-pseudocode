/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C039FFB4
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2)
{
  struct HDXGMONITOR__ *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  int MonitorType; // eax

  *(_DWORD *)a2 = 0;
  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v3 )
    return 0;
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)this + 5);
  }
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *(_QWORD *)(v8 + 16);
  MonitorType = MonitorGetMonitorType(v3, a2);
  if ( MonitorType < 0 )
  {
    WdLogSingleEntry3(2LL, v3, v9, MonitorType);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
