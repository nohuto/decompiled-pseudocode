/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8B90
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A02E0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCursorId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E89A8 (-EmitCursorId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEnableRendering@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8A20 (-EmitEnableRendering@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputDeviceId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8A98 (-EmitInputDeviceId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOrientation@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8B10 (-EmitOrientation@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitVisualReference@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E8C18 (-EmitVisualReference@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitCursorId(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitInputDeviceId(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitEnableRendering(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitOrientation(this, a2) )
  {
    return DirectComposition::CCursorVisualMarshaler::EmitVisualReference(this, a2);
  }
  return v4;
}
