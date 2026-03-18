/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D7270
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A058C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAnimationsCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D292C (-EmitSetAnimationsCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3AEC (-EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(
         this,
         (struct DirectComposition::CBatch **)a2) )
  {
    return DirectComposition::CAnimationTriggerMarshaler::EmitSetAnimationsCommand(this, a2);
  }
  return v4;
}
