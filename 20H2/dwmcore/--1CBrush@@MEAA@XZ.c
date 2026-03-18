/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x18006D10C
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001E6F0 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x18006C914 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x18006CF84 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CB264 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800CE9A4 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800D17E0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E0D34 (--1CDropShadow@@UEAA@XZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x1801B703C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801BACB8 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E5D4C (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BBE68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 64);
  CResource::~CResource(this);
}
