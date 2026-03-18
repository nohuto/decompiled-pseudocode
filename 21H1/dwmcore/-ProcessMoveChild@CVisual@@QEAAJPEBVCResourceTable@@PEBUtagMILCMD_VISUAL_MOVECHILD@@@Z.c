/*
 * XREFs of ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800C8E28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18007C790 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007EF90 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessMoveChild(
        CComposition **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_MOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  __int64 v6; // rcx
  struct CVisual *v7; // rbx
  int inserted; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xC3u);
  v7 = Resource;
  if ( Resource )
  {
    CVisual::RemoveChild(this, Resource, 1);
    inserted = CVisual::InsertChildAt((CVisual *)this, v7, *((_DWORD *)a3 + 3), 1);
    v10 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, inserted, 0xCBAu, 0LL);
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xCB6u, 0LL);
  }
  return v10;
}
