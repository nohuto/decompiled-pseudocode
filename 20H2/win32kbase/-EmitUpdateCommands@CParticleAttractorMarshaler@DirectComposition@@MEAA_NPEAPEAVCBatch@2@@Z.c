/*
 * XREFs of ?EmitUpdateCommands@CParticleAttractorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D50D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3224 (-EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3B18 (-EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4284 (-EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CParticleAttractorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleAttractorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleAttractorMarshaler::EmitSetOffsetCommand(this, a2)
    && DirectComposition::CParticleAttractorMarshaler::EmitSetRadiusCommand(this, a2) )
  {
    return DirectComposition::CParticleAttractorMarshaler::EmitSetStrengthCommand(this, a2) != 0;
  }
  return v4;
}
