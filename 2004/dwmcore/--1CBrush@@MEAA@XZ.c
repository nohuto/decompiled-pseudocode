/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x18009A27C
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001ECC0 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180099954 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x18009A0F4 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CBCA4 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800CF984 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800D22E0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E0AC4 (--1CDropShadow@@UEAA@XZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x1801B8F2C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801BCBA8 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E7B94 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7D50 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
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
