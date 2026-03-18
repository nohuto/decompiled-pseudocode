/*
 * XREFs of ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00794E0 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D3C00 (-EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CRegionGeometryMarshaler::EmitSetRectanglesCommand(this, a2);
  return v4;
}
