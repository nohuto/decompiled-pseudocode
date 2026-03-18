/*
 * XREFs of ?InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition@@MEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00A5E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00A5E70 (-InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemReso.c)
 */

__int64 __fastcall DirectComposition::CSharedReadCompositionLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedReadCompositionLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  return DirectComposition::CSharedReadMarshaler::InitializeFromSharedResource(this, a2);
}
