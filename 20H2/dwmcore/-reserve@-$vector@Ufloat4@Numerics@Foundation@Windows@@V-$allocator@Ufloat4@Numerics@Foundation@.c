/*
 * XREFs of ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x180173C2C
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x18016FD90 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18017398C (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float4>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 4;
  if ( a2 > result )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    return std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
