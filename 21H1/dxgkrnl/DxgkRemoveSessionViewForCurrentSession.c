/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C015A28C
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0130FC8 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0131400 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C015A320 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax

  v4 = a2;
  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2317] != KeGetCurrentThread() )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v13 + 24) = 841LL;
      WdLogEvent5_WdAssertion(v13);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1, v4, a3);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v11 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
