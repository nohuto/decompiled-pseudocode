/*
 * XREFs of ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5460
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1F3C (-EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposit.c)
 *     ?EmitSetGenerateUniformSizesCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1FAC (-EmitSetGenerateUniformSizesCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetMaxAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D23F8 (-EmitSetMaxAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D24E4 (-EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetMaxLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2560 (-EmitSetMaxLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetMaxOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D25D4 (-EmitSetMaxOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMaxOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2648 (-EmitSetMaxOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetMaxSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D27B8 (-EmitSetMaxSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D283C (-EmitSetMaxSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D28AC (-EmitSetMaxTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2A20 (-EmitSetMinAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetMinDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2B0C (-EmitSetMinDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetMinLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2B88 (-EmitSetMinLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetMinOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2BFC (-EmitSetMinOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMinOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2C70 (-EmitSetMinOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetMinSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2D64 (-EmitSetMinSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2DE8 (-EmitSetMinSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2E58 (-EmitSetMinTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CParticleGeneratorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleGeneratorMarshaler::EmitSetMinDirectionCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxDirectionCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetGenerateShortestAngleBetweenDirectionsCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinSpeedCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxSpeedCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinOrientationCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxOrientationCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinTintCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxTintCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinOpacityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxOpacityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinSizeCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxSizeCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetGenerateUniformSizesCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinLifetimeCommand(this, a2) )
  {
    return DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxLifetimeCommand(this, a2) != 0;
  }
  return v4;
}
