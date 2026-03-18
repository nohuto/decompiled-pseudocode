/*
 * XREFs of ?IsPropertyAnimatable@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01D6420
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01DF390 (-IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::IsPropertyAnimatable(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  if ( a2 <= 0x42 )
  {
    if ( a2 != 66 )
    {
      if ( a2 >= 0x34 && (a2 <= 0x36 || a2 == 59 || a2 > 0x3C && a2 <= 0x40) )
        return a3 == 18;
      return DirectComposition::CVisualMarshaler::IsPropertyAnimatable();
    }
    return a3 == 52;
  }
  if ( a2 <= 0x44 )
    return a3 == 18;
  if ( a2 == 69 || a2 == 71 )
    return a3 == 52;
  return DirectComposition::CVisualMarshaler::IsPropertyAnimatable();
}
