/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C014B81C
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C014B630 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C014B6E0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C0164970 (DxgkSessionReconnected.c)
 *     ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0212280 (-IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx

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
  if ( SessionDataForSpecifiedSession )
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2314);
    if ( v7 )
      _InterlockedIncrement(v7);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v10);
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
