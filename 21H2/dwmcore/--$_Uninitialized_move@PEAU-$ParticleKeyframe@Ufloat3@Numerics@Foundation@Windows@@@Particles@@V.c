/*
 * XREFs of ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x180229F00
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x180229C1C (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
    a3 += 24LL;
    a1 += 24LL;
  }
  return a3;
}
