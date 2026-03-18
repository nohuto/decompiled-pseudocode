/*
 * XREFs of ?EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5B10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007B5FC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D047C (-EmitSetAngleXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D04EC (-EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D0FA0 (-EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1160 (-EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSkewTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSkewTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleXCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleYCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetCenterXCommand(this, a2) )
  {
    return DirectComposition::CSkewTransformMarshaler::EmitSetCenterYCommand(this, a2) != 0;
  }
  return v4;
}
