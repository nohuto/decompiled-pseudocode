/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C012AA90
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012A63C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02B6D90 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00EDAF4 (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  int MonitorType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax

  *(_DWORD *)a2 = 0;
  v5 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v5 )
    return 0;
  v8 = *((_QWORD *)this + 5);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
    v8 = *((_QWORD *)this + 5);
  }
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v17);
    v10 = *(_QWORD *)(v9 + 8);
  }
  v11 = *(_QWORD *)(v10 + 16);
  MonitorType = MonitorGetMonitorType(v5, a2, a3, a4);
  v15 = MonitorType;
  if ( MonitorType < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v18[3] = v5;
    v18[4] = v11;
    v18[5] = v15;
    WdLogEvent5_WdError(v18);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
