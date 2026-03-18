/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DE000
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC93C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetXCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB564 (-EmitSetOffsetXCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB644 (-EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB724 (-EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CTranslateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetXCommand(this, a2)
    && DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetYCommand(this, a2) )
  {
    return DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetZCommand(this, a2) != 0;
  }
  return v4;
}
