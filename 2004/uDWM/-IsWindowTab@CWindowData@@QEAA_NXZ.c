/*
 * XREFs of ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x18005515C
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180044AA8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180055768 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180083B8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180055468 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 */

bool __fastcall CWindowData::IsWindowTab(CWindowData *this)
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl)
      && *((_QWORD *)this + 95) != 0LL;
}
