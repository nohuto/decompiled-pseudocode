/*
 * XREFs of ?IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C002F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z @ 0x1C002F108 (-IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z.c)
 */

bool __fastcall DirectComposition::CSharedReadCompositionLightMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  return DirectComposition::CSharedReadCompositionLightMarshaler::IsCompositionLight(a2);
}
