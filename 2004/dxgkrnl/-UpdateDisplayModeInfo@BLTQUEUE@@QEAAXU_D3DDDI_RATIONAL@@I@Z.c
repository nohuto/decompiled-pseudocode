/*
 * XREFs of ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DE778
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DE6A4 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02FFF3C (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0162BF8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfo(struct _D3DDDI_RATIONAL *this, struct _D3DDDI_RATIONAL a2, UINT a3)
{
  if ( !a2.Numerator || !a2.Denominator )
    a2 = (struct _D3DDDI_RATIONAL)0x10000003CLL;
  this[72] = a2;
  this[73].Numerator = a3;
  BYTE2(this[70].Numerator) = 1;
  BLTQUEUE::IssueCommand((BLTQUEUE *)this);
}
