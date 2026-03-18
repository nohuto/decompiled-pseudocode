/*
 * XREFs of ?IsPropertyAnimatable@CParticleGeneratorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01D8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleGeneratorMarshaler::IsPropertyAnimatable(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  if ( a2 > 0xC )
  {
    if ( a2 > 0xE )
    {
      if ( a2 - 16 <= 1 )
        return a3 == 18;
      return 0;
    }
    return a3 == 52;
  }
  if ( a2 >= 0xB )
    return a3 == 18;
  if ( a2 <= 1 )
    return a3 == 52;
  if ( a2 <= 2 )
    return 0;
  if ( a2 <= 6 )
    return a3 == 18;
  return a3 == 69;
}
