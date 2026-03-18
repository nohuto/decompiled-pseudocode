/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C00DDE78
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D404 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00DE330 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C014B6B4 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  SESSION_ADAPTER *v13; // rbp
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v11 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v11 + 24) = 614LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2329);
  if ( v7 != PsGetCurrentProcess() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v12 + 24) = 615LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v10 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2320);
  while ( v10 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18560) )
  {
    v13 = (SESSION_ADAPTER *)(v10 - 4);
    v14 = v10;
    v10 = (_QWORD *)*v10;
    SESSION_ADAPTER::Cleanup(v13);
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v13 )
      SESSION_ADAPTER::`scalar deleting destructor'(v13);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2330) = 0LL;
}
