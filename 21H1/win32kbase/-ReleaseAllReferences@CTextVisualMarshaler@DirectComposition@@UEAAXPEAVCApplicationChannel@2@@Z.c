/*
 * XREFs of ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01DED60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001C4C0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001C758 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CTextVisualMarshaler *)((char *)this + 368), a2);
  DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CTextVisualMarshaler *)((char *)this + 400), a2);
  DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CTextVisualMarshaler *)((char *)this + 432), a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
