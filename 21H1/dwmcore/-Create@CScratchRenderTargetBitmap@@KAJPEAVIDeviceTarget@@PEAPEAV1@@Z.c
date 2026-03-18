/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x1800D6B84
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800D69BC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800325C8 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x1800D6C18 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // esi
  CScratchRenderTargetBitmap *v5; // rax
  __int64 v6; // rcx
  CMILCOMBase *v7; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)DefaultHeap::Alloc(0x120uLL);
  if ( v5 )
    v7 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5);
  else
    v7 = 0LL;
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    CRenderTargetBitmap::Initialize(v7, a1);
    *a2 = v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
