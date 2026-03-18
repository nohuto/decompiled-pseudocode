/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x180229C1C
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18022A450 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180031174 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x180229F00 (--$_Uninitialized_move@PEAU-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x18022B2C0 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r10

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = v13 + 24 * v7;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(a3 + 16);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>>(
      v17,
      a2,
      v13);
    v16 = a1[1];
    v14 = v15 + 24;
    v17 = a2;
  }
  std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>>(
    v17,
    v16,
    v14);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(a1, v18, v9, v4);
  return v15;
}
