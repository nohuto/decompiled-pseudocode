/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x180042A74
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180040464 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x180040644 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800409A0 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180040BA4 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x180040CF0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x180042AD0 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??_GCBackdropBrush@@UEAAPEAXI@Z @ 0x1800F6160 (--_GCBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18019EA60 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x18020A96C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x18020E284 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 72);
  CResource::~CResource(this);
}
