/*
 * XREFs of ??0CTextVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D05E8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C009B59C (--0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::CTextVisualMarshaler(
        DirectComposition::CTextVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)this, 183);
  *(_QWORD *)v1 = &DirectComposition::CTextVisualMarshaler::`vftable';
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_DWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_DWORD *)(v1 + 416) = 0;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_DWORD *)(v1 + 448) = 0;
  return v1;
}
