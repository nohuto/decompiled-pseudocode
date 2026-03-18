/*
 * XREFs of DxgkReleaseAdapter @ 0x1C01647E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001FA68 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, 0LL);
}
