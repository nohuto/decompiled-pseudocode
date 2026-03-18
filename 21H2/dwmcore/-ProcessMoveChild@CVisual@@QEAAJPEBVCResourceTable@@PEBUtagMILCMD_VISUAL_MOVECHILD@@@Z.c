/*
 * XREFs of ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800E79BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessMoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_MOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  __int64 v6; // rcx
  CVisual **v7; // rbx
  int inserted; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xC3u);
  v7 = (CVisual **)Resource;
  if ( Resource )
  {
    CVisual::RemoveChild(this, Resource, 1);
    inserted = CVisual::InsertChildAt(this, v7, *((_DWORD *)a3 + 3), 1);
    v10 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, inserted, 0xC59u);
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2003303421, 0xC55u);
  }
  return v10;
}
