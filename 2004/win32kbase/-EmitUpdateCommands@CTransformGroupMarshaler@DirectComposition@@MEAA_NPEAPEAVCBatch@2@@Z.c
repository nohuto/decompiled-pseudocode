/*
 * XREFs of ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003860
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetChildrenCommand@CTransformGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00038AC (-EmitSetChildrenCommand@CTransformGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A058C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CTransformGroupMarshaler::EmitSetChildrenCommand(this, a2);
  return v4;
}
