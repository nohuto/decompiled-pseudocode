/*
 * XREFs of ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5060
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D31B4 (-EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D48E8 (-EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4F24 (-EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5C94 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCompositionTextLineMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionTextLineMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CCompositionTextLineMarshaler::EmitSetOffsetCommand(this, a2)
    && DirectComposition::CCompositionTextLineMarshaler::EmitSetWidthCommand(this, a2) )
  {
    return DirectComposition::CCompositionTextLineMarshaler::EmitSetThicknessCommand(this, a2) != 0;
  }
  return v4;
}
