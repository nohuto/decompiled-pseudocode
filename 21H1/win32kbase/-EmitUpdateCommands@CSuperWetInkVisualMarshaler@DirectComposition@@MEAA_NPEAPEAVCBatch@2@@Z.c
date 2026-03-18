/*
 * XREFs of ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DDDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSuperWetInkSourceCommand@CSuperWetInkVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC6C8 (-EmitSetSuperWetInkSourceCommand@CSuperWetInkVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CSuperWetInkVisualMarshaler::EmitSetSuperWetInkSourceCommand(this, a2) != 0;
  return v4;
}
