/*
 * XREFs of ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801AA350
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800B7458 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007802C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CComputeScribbleFramebuffer::HasScribbleStarted(
        FastRegion::Internal::CRgnData **this,
        bool *a2,
        FastRegion::Internal::CRgnData **a3)
{
  FastRegion::Internal::CRgnData *v5; // rax
  int v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 208) )
  {
    if ( *((_BYTE *)this + 233) )
    {
      v6 = FastRegion::CRegion::Copy(a3, this + 16);
      if ( v6 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
    }
    else
    {
      *(_DWORD *)*a3 = 0;
    }
    *a2 = *((_BYTE *)this + 233);
  }
  else
  {
    v5 = *a3;
    *a2 = 0;
    *(_DWORD *)v5 = 0;
  }
}
