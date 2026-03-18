/*
 * XREFs of DxgkReleaseGdiViewId @ 0x1C03496C8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C039834C (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1C03483AC (-ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z.c)
 */

void __fastcall DxgkReleaseGdiViewId(char a1, __int64 a2, unsigned __int32 a3, char a4)
{
  unsigned int v6; // esi
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v6 = a2;
  if ( a1 )
  {
    Global = DXGGLOBAL_GetGlobal();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 122),
                                       v6);
    if ( SessionDataForSpecifiedSession )
      DXGSESSIONDATA::ReleaseSessionGdiViewId(SessionDataForSpecifiedSession, a3, a4);
  }
  else
  {
    LOBYTE(a2) = a4;
    DMgrReleaseGdiViewId(a3, a2);
  }
}
