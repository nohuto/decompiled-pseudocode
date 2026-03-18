/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D57D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetColorDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D15D4 (-EmitSetColorDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetColorLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1658 (-EmitSetColorLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIndexDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D21A4 (-EmitSetIndexDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIndexLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2224 (-EmitSetIndexLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNormalDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2ED4 (-EmitSetNormalDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D2FDC (-EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPositionDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D39B8 (-EmitSetPositionDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPositionLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3A38 (-EmitSetPositionLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitiveTopologyCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3AA8 (-EmitSetPrimitiveTopologyCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTangentDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4574 (-EmitSetTangentDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTangentLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D45F8 (-EmitSetTangentLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord0DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D46F8 (-EmitSetTexCoord0DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D477C (-EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord1DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D47F0 (-EmitSetTexCoord1DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord1LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4874 (-EmitSetTexCoord1LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSceneMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSceneMeshMarshaler::EmitSetPrimitiveTopologyCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetIndexDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetPositionDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetNormalDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord0DataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord1DataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetColorDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTangentDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetIndexLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetPositionLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetNormalLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord0LayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord1LayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetColorLayoutCommand(this, a2) )
  {
    return DirectComposition::CSceneMeshMarshaler::EmitSetTangentLayoutCommand(this, a2) != 0;
  }
  return v4;
}
