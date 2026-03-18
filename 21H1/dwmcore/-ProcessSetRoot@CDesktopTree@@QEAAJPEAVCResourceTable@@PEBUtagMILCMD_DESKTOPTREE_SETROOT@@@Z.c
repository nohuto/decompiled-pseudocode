/*
 * XREFs of ?ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z @ 0x1800D3850
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800D38A4 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDesktopTree::ProcessSetRoot(
        CDesktopTree *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPTREE_SETROOT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0xC3u)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x57u, 0LL);
  }
  else
  {
    v8 = CDesktopTree::SetRootVisual(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5Bu, 0LL);
  }
  return v10;
}
