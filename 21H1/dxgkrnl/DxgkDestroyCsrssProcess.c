/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C015A65C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0007EC0 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00D8E70 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0132F08 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
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
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  DXGADAPTER **v14; // rbp
  _QWORD *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 88);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v12 + 24) = 614LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2329);
  if ( v7 != PsGetCurrentProcess(v3, v2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 615LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v11 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2320);
  while ( v11 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18560) )
  {
    v14 = (DXGADAPTER **)(v11 - 4);
    v15 = v11;
    v11 = (_QWORD *)*v11;
    SESSION_ADAPTER::Cleanup(v14, v10);
    v16 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    if ( v14 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v14);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2330) = 0LL;
}
