/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1C01F2E60
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char DxgkGetUseHWGPUInRemoteSession()
{
  __int64 v0; // rcx
  DXGSESSIONMGR *v1; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v1 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v1
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v1, CurrentProcessSessionId)) != 0LL) )
  {
    return *((_BYTE *)SessionDataForSpecifiedSession + 18505);
  }
  else
  {
    return 0;
  }
}
