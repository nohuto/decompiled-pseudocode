/*
 * XREFs of ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F220
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C009EA64 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

__int64 __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::EmitCreationCommand(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           this,
           a2,
           *(unsigned int *)(*((_QWORD *)this + 17) + 24LL));
}
