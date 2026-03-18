/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180045710
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVECHILD *a3)
{
  unsigned int v4; // ebx
  struct CVisual *Resource; // rax
  unsigned int v6; // ecx

  v4 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 195LL);
  if ( Resource )
  {
    CVisual::RemoveChild(this, Resource, 0);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xBF1u, 0LL);
  }
  return v4;
}
