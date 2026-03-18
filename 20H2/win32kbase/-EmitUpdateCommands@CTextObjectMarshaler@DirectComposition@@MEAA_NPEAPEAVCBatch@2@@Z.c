/*
 * XREFs of ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5C94
 * Callers:
 *     ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5000 (-EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5060 (-EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D0B88 (-EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D0DD0 (-EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4118 (-EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(
        DirectComposition::CTextObjectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitSetBrushCommand(this, a2)
    && DirectComposition::CTextObjectMarshaler::EmitSetBaselineOriginCommand(this, a2) )
  {
    return DirectComposition::CTextObjectMarshaler::EmitSetSnappingOffsetCommand(this, a2) != 0;
  }
  return v4;
}
