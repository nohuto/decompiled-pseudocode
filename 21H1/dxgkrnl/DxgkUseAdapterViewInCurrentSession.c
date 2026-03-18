/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C00D8910
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01266E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00D8B10 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00D8B70 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00D8CAC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00D8D28 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C0126EC0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, __int64 a2, char a3)
{
  char v3; // di
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r14
  struct DXGADAPTER *v18; // rdi
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DISPLAY_SOURCE *v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // al
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 LowPart; // rcx
  char v41; // [rsp+21h] [rbp-88h]
  _BYTE v42[6]; // [rsp+22h] [rbp-87h] BYREF
  SESSION_ADAPTER *v43; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v44[144]; // [rsp+30h] [rbp-79h] BYREF

  v43 = 0LL;
  v3 = a3;
  v5 = (unsigned int)a2;
  v41 = 0;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v31 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v31 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
  v42[0] = 0;
  v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v42, 1);
  v14 = v11;
  if ( v11 < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v32 + 24) = v14;
    WdLogEvent5_WdError(v32);
  }
  else if ( v3 )
  {
    LODWORD(v14) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, 0LL, &v43);
    if ( (int)v14 >= 0 )
    {
      SessionAdapterFromLuid = v43;
      v41 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_8:
      if ( (_DWORD)v5 == -1 )
        goto LABEL_18;
      v18 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( !v18 )
      {
        LODWORD(v14) = -1073741811;
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
        v34[3] = a1->HighPart;
        v34[4] = a1->LowPart;
        v34[5] = v5;
        v34[6] = -1073741811LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_29;
      }
      if ( !*((_QWORD *)v18 + 334) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v35 + 24) = 503LL;
        WdLogEvent5_WdAssertion(v35);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v18, 0LL);
      v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v44, v19 + 1, v19);
      v14 = v20;
      if ( v20 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
        v36[3] = a1->HighPart;
        v36[4] = a1->LowPart;
        v36[5] = v14;
      }
      else
      {
        v23 = *((_QWORD *)v18 + 334);
        if ( (unsigned int)v5 >= *(_DWORD *)(v23 + 80) )
        {
          LODWORD(v14) = -1073741811;
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v37[3] = v5;
          v37[4] = a1->HighPart;
          v37[5] = a1->LowPart;
          v37[6] = -1073741811LL;
          WdLogEvent5_WdError(v37);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44, v38);
          goto LABEL_29;
        }
        v24 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v23 + 112) + 3968 * v5);
        if ( a3 )
        {
          v25 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v24);
          v14 = v25;
          if ( v25 >= 0 )
          {
            KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v18 + 334) + 560LL), 0, 0);
LABEL_17:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44, v26);
            v3 = a3;
LABEL_18:
            if ( (int)v14 >= 0 )
            {
              v28 = v3 == 0;
              goto LABEL_20;
            }
LABEL_29:
            v28 = v41;
LABEL_20:
            if ( v28 )
              DXGSESSIONDATA::RemoveAdapterFromSession(SessionDataForSpecifiedSession, a1);
            goto LABEL_22;
          }
        }
        else
        {
          v30 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v24);
          v14 = v30;
          if ( v30 >= 0 )
            goto LABEL_17;
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
        v36[3] = v5;
        v36[4] = a1->HighPart;
        LowPart = a1->LowPart;
        v36[6] = v14;
        v36[5] = LowPart;
      }
      WdLogEvent5_WdError(v36);
      goto LABEL_17;
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v33[3] = a1->HighPart;
    v33[4] = a1->LowPart;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdError(v33);
    LODWORD(v14) = -1073741811;
  }
LABEL_22:
  if ( v42[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v14;
}
