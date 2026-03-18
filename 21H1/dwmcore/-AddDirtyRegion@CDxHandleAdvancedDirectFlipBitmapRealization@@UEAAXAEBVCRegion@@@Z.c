/*
 * XREFs of ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026451C
 * Callers:
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F0370 (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180170B50 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddDirtyRegion(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  std::shared_ptr<CRegion>::operator=((_QWORD *)this - 11, (__int64 *)v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  CBitmapRealization::AddDirtyRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 136), a2);
}
