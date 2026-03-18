/*
 * XREFs of ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5000
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetInSurfaceCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D32A0 (-EmitSetOffsetInSurfaceCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetSurfaceScaleCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4500 (-EmitSetSurfaceScaleCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5C94 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCompositionGlyphRunMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CCompositionGlyphRunMarshaler::EmitSetOffsetInSurfaceCommand(this, a2) )
  {
    return DirectComposition::CCompositionGlyphRunMarshaler::EmitSetSurfaceScaleCommand(this, a2) != 0;
  }
  return v4;
}
