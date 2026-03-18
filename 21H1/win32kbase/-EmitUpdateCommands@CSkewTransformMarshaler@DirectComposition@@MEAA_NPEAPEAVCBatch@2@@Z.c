/*
 * XREFs of ?EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DDD60
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC93C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D86CC (-EmitSetAngleXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D873C (-EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D91F0 (-EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D93B0 (-EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSkewTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSkewTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleXCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleYCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetCenterXCommand(this, a2) )
  {
    return DirectComposition::CSkewTransformMarshaler::EmitSetCenterYCommand(this, a2) != 0;
  }
  return v4;
}
