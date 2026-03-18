/*
 * XREFs of ?IsPropertyAnimatable@CParticleAttractorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01D63F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleAttractorMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  if ( !a2 )
    return a3 == 52;
  if ( (unsigned int)(a2 - 1) > 1 )
    return 0;
  return a3 == 18;
}
