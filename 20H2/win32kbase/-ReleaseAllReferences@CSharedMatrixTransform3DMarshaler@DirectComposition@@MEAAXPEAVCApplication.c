/*
 * XREFs of ?ReleaseAllReferences@CSharedMatrixTransform3DMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F2BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 17) = 0LL;
  }
}
