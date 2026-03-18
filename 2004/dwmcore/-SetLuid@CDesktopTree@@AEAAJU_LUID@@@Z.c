/*
 * XREFs of ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800D94E4
 * Callers:
 *     ?ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z @ 0x1800D94BC (-ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B382C (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDesktopTree@CComposition@@IEAAXPEAVCDesktopTree@@@Z @ 0x1800D9554 (-AddDesktopTree@CComposition@@IEAAXPEAVCDesktopTree@@@Z.c)
 */

__int64 __fastcall CDesktopTree::SetLuid(CDesktopTree *this, struct _LUID a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 1474) || *((_DWORD *)this + 1475) || !*(_QWORD *)&a2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x167u, 0LL);
  }
  else
  {
    *((struct _LUID *)this + 737) = a2;
    CComposition::AddDesktopTree(*((CComposition **)this + 2), this);
  }
  return v2;
}
