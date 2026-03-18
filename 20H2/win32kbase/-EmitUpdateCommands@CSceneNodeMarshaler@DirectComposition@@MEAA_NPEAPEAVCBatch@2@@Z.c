/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D59B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D12B0 (-EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetComponentsCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D16CC (-EmitSetComponentsCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4D20 (-EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSceneNodeMarshaler::EmitSetChildrenCommand(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CSceneNodeMarshaler::EmitSetComponentsCommand(this, (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CSceneNodeMarshaler::EmitSetTransformCommand(this, a2) != 0;
  }
  return v4;
}
