/*
 * XREFs of ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180076940
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180250958 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007802C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::Copy(CRegion *this, const struct CRegion *a2)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = FastRegion::CRegion::Copy(this, a2);
  if ( v2 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
}
