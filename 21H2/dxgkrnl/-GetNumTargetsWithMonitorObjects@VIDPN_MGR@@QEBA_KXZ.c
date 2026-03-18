/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0029D40
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C01D47C8 (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = *((_QWORD *)this + 1);
  v3 = 1;
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *((_QWORD *)this + 1);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(_QWORD *)(v2 + 16), &v5) < 0 )
    WdLogSingleEntry0(1LL);
  if ( v5 > 1 )
    return v5;
  return v3;
}
