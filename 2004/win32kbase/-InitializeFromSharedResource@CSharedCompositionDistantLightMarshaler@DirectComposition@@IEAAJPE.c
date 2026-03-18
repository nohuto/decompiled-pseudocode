/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C004ED2C
 * Callers:
 *     ?Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C004EAB0 (-Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionDistantLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionDistantLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 32) = -1082130432;
  *((_OWORD *)this + 6) = xmmword_1C0213780;
  *((_DWORD *)this + 33) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 17) = a2;
  return result;
}
