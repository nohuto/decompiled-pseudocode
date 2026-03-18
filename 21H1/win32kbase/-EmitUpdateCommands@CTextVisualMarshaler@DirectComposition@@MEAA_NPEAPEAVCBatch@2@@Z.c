/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DDF40
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetGlyphRunsCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA270 (-EmitSetGlyphRunsCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetStrikethroughsCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC544 (-EmitSetStrikethroughsCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetUnderlinesCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DCFF0 (-EmitSetUnderlinesCommand@CTextVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CTextVisualMarshaler::EmitSetGlyphRunsCommand(this, a2)
    && DirectComposition::CTextVisualMarshaler::EmitSetStrikethroughsCommand(this, a2) )
  {
    return DirectComposition::CTextVisualMarshaler::EmitSetUnderlinesCommand(this, a2);
  }
  return v4;
}
