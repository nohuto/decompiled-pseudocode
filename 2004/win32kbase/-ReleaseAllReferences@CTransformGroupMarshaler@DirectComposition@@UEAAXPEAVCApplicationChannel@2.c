/*
 * XREFs of ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030A18 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CTransformGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArray::Clear(
    (DirectComposition::CTransformGroupMarshaler *)((char *)this + 72),
    a2);
}
