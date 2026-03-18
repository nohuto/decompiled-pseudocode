/*
 * XREFs of ?EmitUpdateCommands@CParticleBehaviorsMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D7450
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetAngularVelocityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D28A8 (-EmitSetAngularVelocityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetDirectionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3B6C (-EmitSetDirectionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetForceCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D40FC (-EmitSetForceCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLifetimeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4644 (-EmitSetLifetimeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOpacityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5814 (-EmitSetOpacityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOrientationCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5898 (-EmitSetOrientationCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetPositionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5C08 (-EmitSetPositionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D6190 (-EmitSetScaleCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSizeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D6364 (-EmitSetSizeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpeedCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D64D4 (-EmitSetSpeedCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTintCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D6CA0 (-EmitSetTintCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CParticleBehaviorsMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleBehaviorsMarshaler::EmitSetPositionCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetDirectionCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetSpeedCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetOrientationCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetTintCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetForceCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetScaleCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetSizeCommand(this, a2) )
  {
    return DirectComposition::CParticleBehaviorsMarshaler::EmitSetLifetimeCommand(this, a2) != 0;
  }
  return v4;
}
