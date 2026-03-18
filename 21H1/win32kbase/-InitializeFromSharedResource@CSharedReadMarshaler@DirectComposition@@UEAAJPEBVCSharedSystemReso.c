/*
 * XREFs of ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00357A0
 * Callers:
 *     ?InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition@@MEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0035780 (-InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition@@MEAAJPEBVC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedReadMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedReadMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
  {
    *((_QWORD *)this + 7) = a2;
    *((_DWORD *)this + 16) = *((_DWORD *)a2 + 3);
  }
  return result;
}
