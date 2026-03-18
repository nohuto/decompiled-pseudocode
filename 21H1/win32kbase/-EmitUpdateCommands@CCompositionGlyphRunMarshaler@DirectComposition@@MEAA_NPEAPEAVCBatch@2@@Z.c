/*
 * XREFs of ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD250
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetInSurfaceCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB4F0 (-EmitSetOffsetInSurfaceCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetSurfaceScaleCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC750 (-EmitSetSurfaceScaleCommand@CCompositionGlyphRunMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DDEE4 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CCompositionGlyphRunMarshaler::EmitSetOffsetInSurfaceCommand(this, a2) )
  {
    return DirectComposition::CCompositionGlyphRunMarshaler::EmitSetSurfaceScaleCommand(this, a2) != 0;
  }
  return v4;
}
