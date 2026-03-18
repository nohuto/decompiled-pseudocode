/*
 * XREFs of ?InitializeFromSharedResource@CSharedMatrixTransform3DMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C01F9DE0
 * Callers:
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F9C70 (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_DWORD *)this + 18) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 17) = a2;
  return result;
}
