/*
 * XREFs of ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5B90
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007B350 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSuperWetInkSourceCommand@CSuperWetInkVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D4478 (-EmitSetSuperWetInkSourceCommand@CSuperWetInkVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

bool __fastcall DirectComposition::CSuperWetInkVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CSuperWetInkVisualMarshaler::EmitSetSuperWetInkSourceCommand(this, a2) != 0;
  return v4;
}
