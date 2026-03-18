/*
 * XREFs of ?ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z @ 0x1800F7C34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800F7C5C (-SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CDesktopTree::ProcessCreate(CDesktopTree *this, struct CResourceTable *a2, struct _LUID *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  if ( (int)CDesktopTree::SetLuid(this, a3[1]) < 0 )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2003303421, 0x47u);
  }
  return v3;
}
