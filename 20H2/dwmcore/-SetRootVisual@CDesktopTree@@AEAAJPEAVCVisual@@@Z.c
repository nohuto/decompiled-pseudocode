/*
 * XREFs of ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800DAF24
 * Callers:
 *     ?ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z @ 0x1800DAED0 (-ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B1714 (--1CDesktopTree@@UEAA@XZ.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B193C (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800AA250 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800AC280 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 */

__int64 __fastcall CDesktopTree::SetRootVisual(CComposition ***this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int inserted; // eax
  __int64 v6; // rcx

  v4 = 0;
  CVisual::RemoveAllChildren(this[7]);
  if ( a2 && (inserted = CVisual::InsertChildAt((CVisual *)this[7], a2, 0, 0), v4 = inserted, inserted < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inserted, 0x177u, 0LL);
  else
    *((_BYTE *)this + 5892) = 1;
  return v4;
}
