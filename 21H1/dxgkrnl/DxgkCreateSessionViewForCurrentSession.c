/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x1C0132C6C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0131CF0 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C0132D20 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

int __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        __int64 a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct SESSION_VIEW **v17; // [rsp+30h] [rbp-18h]

  v7 = a2;
  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2317] != KeGetCurrentThread() )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v16 + 24) = 794LL;
      WdLogEvent5_WdAssertion(v16);
    }
    return DXGSESSIONDATA::AddSourceViewToSession(
             (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
             a3,
             a1,
             v7,
             a4,
             a5,
             v17);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v15);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return -1073741811;
  }
}
