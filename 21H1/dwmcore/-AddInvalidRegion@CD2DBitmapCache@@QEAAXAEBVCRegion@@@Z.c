/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x18019F8F8
 * Callers:
 *     ?CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z @ 0x1800EB980 (-CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x18019F57C (-AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180263190 (-AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802640A0 (-AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026594C (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CD2DBitmapCache::AddInvalidRegion(
        CD2DBitmapCache *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)(v4 + 56), a2);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  }
  v6 = *((_QWORD *)this + 6);
  v7 = *((_QWORD *)this + 7);
  while ( v6 != v7 )
  {
    v8 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) + 264LL),
           a2);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v6 += 8LL;
  }
}
