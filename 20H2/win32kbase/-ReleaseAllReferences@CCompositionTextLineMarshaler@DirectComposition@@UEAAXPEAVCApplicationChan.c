/*
 * XREFs of ?ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D6610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CTextObjectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D6960 (-ReleaseAllReferences@CTextObjectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionTextLineMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionTextLineMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CTextObjectMarshaler::ReleaseAllReferences(this, a2);
}
