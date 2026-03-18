/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C011D6A8
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C011D1F0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C0136A68 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 * Callees:
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C0007978 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(VIDSCH_EXPORT **this, struct DXGPROCESS *a2)
{
  if ( *((_BYTE *)this[2] + 209) )
    return 0;
  else
    return VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(this[77], this[78], a2);
}
