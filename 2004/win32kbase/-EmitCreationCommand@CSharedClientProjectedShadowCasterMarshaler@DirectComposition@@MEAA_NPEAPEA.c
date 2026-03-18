/*
 * XREFs of ?EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F5860
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C009EA64 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::EmitCreationCommand(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           (__int64 *)a2,
           *(_DWORD *)(*((_QWORD *)this + 13) + 24LL));
}
