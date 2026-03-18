/*
 * XREFs of DxgkReleaseAdapter @ 0x1C0173080
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001FB18 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReference(a1);
  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 102);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, 0LL);
}
