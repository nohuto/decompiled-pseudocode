/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC93C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAnimationsCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D88AC (-EmitSetAnimationsCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9A6C (-EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(this, a2) )
  {
    return DirectComposition::CAnimationTriggerMarshaler::EmitSetAnimationsCommand(this, a2);
  }
  return v4;
}
