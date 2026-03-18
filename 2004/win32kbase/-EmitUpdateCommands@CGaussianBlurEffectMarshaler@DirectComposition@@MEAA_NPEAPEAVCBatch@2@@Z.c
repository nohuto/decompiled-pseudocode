/*
 * XREFs of ?EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC250
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitData@CGaussianBlurEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC1D4 (-EmitData@CGaussianBlurEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C01DC684 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CGaussianBlurEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CGaussianBlurEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CEffectInputSet::EmitUpdateCommands(
                          (char *)this + 72,
                          a2,
                          *((unsigned int *)this + 6),
                          a2) )
    return DirectComposition::CGaussianBlurEffectMarshaler::EmitData(this, a2) != 0;
  return v4;
}
