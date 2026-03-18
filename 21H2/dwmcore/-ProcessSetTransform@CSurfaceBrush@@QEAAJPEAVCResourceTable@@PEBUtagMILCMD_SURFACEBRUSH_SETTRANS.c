/*
 * XREFs of ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x180240544
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180240684 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetTransform(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETTRANSFORM *a3)
{
  struct CComponentTransform2D *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CComponentTransform2D *)CResourceTable::GetResource((__int64)a2, v5, 0x1Bu)) != 0LL )
  {
    v9 = CSurfaceBrush::SetTransform(this, Resource);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xCEu);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0xCAu);
  }
  return v8;
}
