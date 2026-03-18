/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C013B244
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E3218 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01130B0 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01568B0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGSESSIONMGR *v24; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v27; // rax
  struct DXGFASTMUTEX *const *v28; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _BYTE v30[144]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = 3045LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGPROCESS::GetCurrent(a1, (__int64)a2) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v30,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2696),
          (__int64 (__fastcall *)(__int64, __int64))lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v10, v9);
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v19[3] = v3;
      v19[4] = a2;
      v19[5] = a3;
    }
    v24 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v21, v20) + 102);
    if ( v24 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23, v22);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v24, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v28 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v28 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v23, v22);
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v28, CurrentProcess);
        goto LABEL_10;
      }
      v27 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v27 + 24) = 3105LL;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v27 + 24) = 3098LL;
    }
    WdLogEvent5_WdError(v27);
LABEL_10:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30, v11);
    return;
  }
  v13 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  *(_QWORD *)(v13 + 24) = 3051LL;
  WdLogEvent5_WdWarning(v13);
}
