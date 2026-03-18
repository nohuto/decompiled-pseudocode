/*
 * XREFs of ?InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C006B8AC
 * Callers:
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C006A640 (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedInteractionMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedInteractionMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_DWORD *)this + 68) = (unsigned int)PsGetCurrentProcessId();
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 42) = a2;
  return result;
}
