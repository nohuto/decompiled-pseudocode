/*
 * XREFs of ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x180264B6C
 * Callers:
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F04A0 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180170B50 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::MarkFullDirty(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  std::shared_ptr<CRegion>::operator=((_QWORD *)this - 11, (__int64 *)v2);
  if ( v2[1] )
    std::_Ref_count_base::_Decref(v2[1]);
  CBitmapRealization::MarkFullDirty((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 136));
}
