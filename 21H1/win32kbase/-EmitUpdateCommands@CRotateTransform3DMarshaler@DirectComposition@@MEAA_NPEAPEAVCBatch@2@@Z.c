/*
 * XREFs of ?EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD860
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC93C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D85EC (-EmitSetAngleCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAxisXCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D8B88 (-EmitSetAxisXCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAxisYCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D8BF8 (-EmitSetAxisYCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAxisZCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D8C68 (-EmitSetAxisZCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D90A0 (-EmitSetCenterXCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9260 (-EmitSetCenterYCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterZCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9420 (-EmitSetCenterZCommand@CRotateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRotateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CRotateTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAngleCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisXCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisYCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisZCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterXCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterYCommand(this, a2) )
  {
    return DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterZCommand(this, a2) != 0;
  }
  return v4;
}
