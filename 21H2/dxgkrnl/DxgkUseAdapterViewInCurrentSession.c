/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C01E1BC4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A5328 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01E1DC0 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01E1E20 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01E1F44 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01E1FC0 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // bl
  __int64 v4; // r13
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  unsigned int v8; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  int v10; // eax
  __int64 v11; // rsi
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  struct DISPLAY_SOURCE *v16; // rdx
  int v17; // eax
  bool v18; // al
  int v20; // eax
  const wchar_t *v21; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // [rsp+38h] [rbp-A1h]
  char v26; // [rsp+50h] [rbp-89h]
  _BYTE v28[6]; // [rsp+52h] [rbp-87h] BYREF
  SESSION_ADAPTER *v29; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v30[144]; // [rsp+60h] [rbp-79h] BYREF

  v3 = a3;
  v4 = a2;
  v29 = 0LL;
  v26 = 0;
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v7
    || (v8 = PsGetCurrentProcessSessionId(v6),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v8)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v24 = PsGetCurrentProcessSessionId(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v28[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v28, 1);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else if ( v3 )
  {
    LODWORD(v11) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, 0LL, &v29);
    if ( (int)v11 >= 0 )
    {
      SessionAdapterFromLuid = v29;
      v26 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_7:
      if ( (_DWORD)v4 == -1 )
      {
LABEL_17:
        v18 = v3 == 0;
        goto LABEL_18;
      }
      v13 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v13 )
      {
        if ( !*((_QWORD *)v13 + 349) )
        {
          WdLogSingleEntry1(1LL, 510LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            510LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v13, 0LL);
        v14 = COREADAPTERACCESS::AcquireExclusive((__int64)v30);
        v11 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v14);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire the lock shared on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
            a1->HighPart,
            a1->LowPart,
            v11,
            0LL,
            0LL);
        }
        else
        {
          v15 = *((_QWORD *)v13 + 349);
          if ( (unsigned int)v4 >= *(_DWORD *)(v15 + 96) )
          {
            LODWORD(v11) = -1073741811;
            WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, -1073741811LL);
            v21 = L"The VidPnSourceId 0x%I64x caller specified does not exit on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
            v25 = -1073741811LL;
          }
          else
          {
            v16 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v15 + 128) + 4000 * v4);
            if ( a3 )
            {
              v17 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v16);
              v11 = v17;
              if ( v17 >= 0 )
              {
                KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v13 + 349) + 656LL), 0, 0);
LABEL_16:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
                v3 = a3;
                goto LABEL_17;
              }
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v17);
              v21 = L"Failed to take owner on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
              v25 = v11;
            }
            else
            {
              v20 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v16);
              v11 = v20;
              if ( v20 >= 0 )
                goto LABEL_16;
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v20);
              v21 = L"Failed to remove the session ownership on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
              v25 = v11;
            }
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, v4, a1->HighPart, a1->LowPart, v25, 0LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
      }
      else
      {
        LODWORD(v11) = -1073741811;
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v4, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to take the adapter view ownership since adapter 0x%I64x%08I64x does not have the caller speci"
                    "fied VidPn Source ID 0x%I64x, returning 0x%I64x.",
          a1->HighPart,
          a1->LowPart,
          v4,
          -1073741811LL,
          0LL);
      }
      v18 = v26;
LABEL_18:
      if ( v18 )
        DXGSESSIONDATA::RemoveAdapterFromSession(SessionDataForSpecifiedSession, a1);
      goto LABEL_20;
    }
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
      a1->HighPart,
      a1->LowPart,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v11) = -1073741811;
  }
LABEL_20:
  if ( v28[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v11;
}
