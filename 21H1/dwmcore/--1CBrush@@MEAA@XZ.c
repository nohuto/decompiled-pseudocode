/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x18009443C
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001F3C0 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800924D0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180093E74 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1800942B4 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800C4AF4 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800C8274 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DF464 (--1CDropShadow@@UEAA@XZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x1801BB89C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801BF4C8 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801EA514 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1350 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
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
