/*
 * XREFs of DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C029FB80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z @ 0x1C029E7E8 (-GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z.c)
 */

__int64 __fastcall DxgkGetWddmRemoteSessionGdiViewRange(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rsi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx

  if ( a1 && a2 )
  {
    v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 102);
    if ( v6 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(SessionDataForSpecifiedSession, a1, a2);
      return 0LL;
    }
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v11, v10);
    v12 = v9;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v12);
  return 3221225485LL;
}
