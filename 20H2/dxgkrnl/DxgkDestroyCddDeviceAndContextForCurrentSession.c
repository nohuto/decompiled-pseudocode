/*
 * XREFs of DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029EAB8
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C014874C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     DxgkDisplayOnOff @ 0x1C014A330 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C0164AC0 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C011DF40 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014B728 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyCddDeviceAndContextForCurrentSession(struct _LUID *a1, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v11, v10);
    v12 = (_QWORD *)v9;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
  if ( !SessionAdapterFromLuid )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v17[3] = a1->HighPart;
    v17[4] = a1->LowPart;
    v12 = v17;
    v17[5] = -1073741811LL;
    goto LABEL_6;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(SessionAdapterFromLuid, a2);
  return 0LL;
}
