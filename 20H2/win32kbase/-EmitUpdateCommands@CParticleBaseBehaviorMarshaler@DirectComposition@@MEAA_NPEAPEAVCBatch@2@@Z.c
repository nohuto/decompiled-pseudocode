/*
 * XREFs of ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5130
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D0BF8 (-EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2294 (-EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 */

bool __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetBindingsCommand(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetInputSourceCommand(this, a2) != 0;
  }
  return v4;
}
