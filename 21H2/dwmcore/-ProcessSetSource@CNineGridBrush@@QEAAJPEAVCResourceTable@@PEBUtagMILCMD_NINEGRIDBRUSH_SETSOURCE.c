/*
 * XREFs of ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1800E7864
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1800E78C4 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z @ 0x1800E7940 (-IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetSource(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETSOURCE *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CBrush *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType && !CNineGridBrush::IsValidSourceResource(ResourceWithoutType) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2003303421, 0x124u);
  }
  else
  {
    v7 = CNineGridBrush::SetSource(this, v5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x128u);
  }
  return v9;
}
