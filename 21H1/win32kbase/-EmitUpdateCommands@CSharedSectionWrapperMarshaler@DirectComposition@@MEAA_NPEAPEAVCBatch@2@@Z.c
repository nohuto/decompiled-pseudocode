/*
 * XREFs of ?EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F96C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F9628 (-EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSharedSectionWrapperMarshaler::EmitUpdateCommands(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CSharedSectionWrapperMarshaler::EmitSetSharedSection(this, a2) != 0;
}
