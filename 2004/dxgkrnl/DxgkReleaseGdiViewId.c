/*
 * XREFs of DxgkReleaseGdiViewId @ 0x1C029FCD4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02D9A80 (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1C029ECEC (-ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z.c)
 */

void __fastcall DxgkReleaseGdiViewId(__int64 a1, __int64 a2, unsigned __int32 a3, char a4)
{
  unsigned int v6; // esi
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v6 = a2;
  if ( (_BYTE)a1 )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 102),
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
