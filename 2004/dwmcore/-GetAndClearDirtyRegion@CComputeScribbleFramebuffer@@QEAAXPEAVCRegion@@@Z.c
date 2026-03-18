/*
 * XREFs of ?GetAndClearDirtyRegion@CComputeScribbleFramebuffer@@QEAAXPEAVCRegion@@@Z @ 0x1801A7870
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800BDAB8 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CComputeScribbleFramebuffer::GetAndClearDirtyRegion(
        CComputeScribbleFramebuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  RTL_SRWLOCK *v2; // rsi
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockExclusive((PSRWLOCK)this + 28);
  v5 = FastRegion::CRegion::Copy(a2, (const struct FastRegion::Internal::CRgnData **)this + 16);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  **((_DWORD **)this + 16) = 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
