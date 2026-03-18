/*
 * XREFs of DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C03494F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z @ 0x1C0347D48 (-GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z.c)
 */

__int64 __fastcall DxgkGetWddmRemoteSessionGdiViewRange(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rsi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax

  if ( a1 && a2 )
  {
    v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v5 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
      if ( SessionDataForSpecifiedSession )
      {
        DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(SessionDataForSpecifiedSession, a1, a2);
        return 0LL;
      }
    }
    v9 = PsGetCurrentProcessSessionId(v4);
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    v11 = PsGetCurrentProcessSessionId(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified NULL pointer to DxgkGetWddmRemoteSessionGdiViewRange, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
