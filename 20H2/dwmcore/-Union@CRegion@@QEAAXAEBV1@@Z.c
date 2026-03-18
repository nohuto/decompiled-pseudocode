/*
 * XREFs of ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800A60F8
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024CF38 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::Union(CRegion *this, const struct CRegion *a2)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = FastRegion::CRegion::Union(this, a2);
  if ( v2 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
}
