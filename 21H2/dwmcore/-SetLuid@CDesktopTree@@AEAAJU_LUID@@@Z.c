/*
 * XREFs of ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800F7C5C
 * Callers:
 *     ?ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z @ 0x1800F7C34 (-ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801F5F68 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopTree::SetLuid(struct _LUID *this, struct _LUID a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( this[591].LowPart == g_luidZero.LowPart && this[591].HighPart == g_luidZero.HighPart && a2 != g_luidZero )
  {
    this[591] = a2;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x195u);
  }
  return v2;
}
