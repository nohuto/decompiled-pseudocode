/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DDC00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9500 (-EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetComponentsCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D991C (-EmitSetComponentsCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DCF70 (-EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSceneNodeMarshaler::EmitSetChildrenCommand(this, a2)
    && DirectComposition::CSceneNodeMarshaler::EmitSetComponentsCommand(this, a2) )
  {
    return DirectComposition::CSceneNodeMarshaler::EmitSetTransformCommand(this, a2) != 0;
  }
  return v4;
}
