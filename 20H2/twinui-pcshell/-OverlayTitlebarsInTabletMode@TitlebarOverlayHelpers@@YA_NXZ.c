/*
 * XREFs of ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1803F9CE4
 * Callers:
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803F6108 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800600C0 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     SHRegGetUSDWORDW @ 0x18046C83C (SHRegGetUSDWORDW.c)
 */

char __fastcall TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(
        TitlebarOverlayHelpers *this,
        enum _TABLETMODESTATE *a2)
{
  int v2; // eax
  char v3; // bl
  int USDWORDW; // eax

  v2 = `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay;
  v3 = 0;
  if ( !`TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay )
  {
    USDWORDW = SHRegGetUSDWORDW(this);
    if ( USDWORDW == -1 )
    {
      if ( IsPPIEdition() )
      {
        `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay = 2;
        return v3;
      }
      v2 = 1;
    }
    else
    {
      v2 = 2 - (USDWORDW != 0);
    }
    `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay = v2;
  }
  if ( v2 == 1 )
    return TabletModeHelpers::IsTabletMode(this, a2);
  return v3;
}
