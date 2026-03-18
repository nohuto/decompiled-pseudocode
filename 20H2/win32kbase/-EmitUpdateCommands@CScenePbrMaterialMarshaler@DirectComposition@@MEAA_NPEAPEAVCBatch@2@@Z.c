/*
 * XREFs of ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5A0C
 * Callers:
 *     ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5900 (-EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 * Callees:
 *     ?EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D02BC (-EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D032C (-EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1A24 (-EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1AA4 (-EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2304 (-EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2F58 (-EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3050 (-EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D30C0 (-EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3144 (-EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 */

bool __fastcall DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaCutoffCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaModeCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveFactorCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetIsDoubleSidedCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalScaleCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionInputCommand(this, a2) )
  {
    return DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionStrengthCommand(this, a2) != 0;
  }
  return v4;
}
