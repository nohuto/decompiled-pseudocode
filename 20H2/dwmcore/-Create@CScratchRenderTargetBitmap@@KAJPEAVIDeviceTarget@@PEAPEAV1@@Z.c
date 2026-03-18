/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18004AB84
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047FAC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18004AA08 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x18004DB84 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // esi
  CScratchRenderTargetBitmap *v5; // rax
  unsigned int v6; // ecx
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
