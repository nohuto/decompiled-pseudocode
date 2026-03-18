/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C01DAAB8
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01DA900 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01DA9B0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01F2CB0 (DxgkSessionReconnected.c)
 *     ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02C3F90 (-IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 DxgkIncreaseSessionAdapterUniqueness()
{
  __int64 v0; // rcx
  DXGSESSIONMGR *v1; // rbx
  unsigned int v2; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v4; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax

  v1 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v1
    && (v2 = PsGetCurrentProcessSessionId(v0),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v1, v2)) != 0LL) )
  {
    v4 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2316);
    if ( v4 )
      _InterlockedIncrement(v4);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v8 = PsGetCurrentProcessSessionId(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
