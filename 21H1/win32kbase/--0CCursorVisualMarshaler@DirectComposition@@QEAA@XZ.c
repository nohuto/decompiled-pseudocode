/*
 * XREFs of ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D640C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C008E340 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0094458 (--0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::CCursorVisualMarshaler(
        DirectComposition::CCursorVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)this, 47);
  *(_DWORD *)(v1 + 392) = 0;
  *(_QWORD *)v1 = &DirectComposition::CCursorVisualMarshaler::`vftable';
  return v1;
}
