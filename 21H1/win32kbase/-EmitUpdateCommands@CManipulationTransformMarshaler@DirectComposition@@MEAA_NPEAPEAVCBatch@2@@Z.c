/*
 * XREFs of ?EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0CC8 (-EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0DEC (-EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

bool __fastcall DirectComposition::CManipulationTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CManipulationTransformMarshaler::EmitSetComponents(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CManipulationTransformMarshaler::EmitSetTracingCookie(this, a2);
  }
  return v4;
}
