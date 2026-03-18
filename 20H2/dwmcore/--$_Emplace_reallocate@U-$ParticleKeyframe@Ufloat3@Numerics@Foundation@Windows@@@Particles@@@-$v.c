/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DA428
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DAC3C (-AppendFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801736F4 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // xmm1_8
  __int64 v19; // rcx
  __int64 v21; // xmm1_8

  v3 = a2;
  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 24;
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 24 * v11;
  if ( v11 > 0xAAAAAAAAAAAAAAALL )
    v12 = -1LL;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v15 = 24 * v6;
  *(_OWORD *)((char *)v13 + v15) = *(_OWORD *)a3;
  *(_QWORD *)((char *)v13 + v15 + 16) = *(_QWORD *)(a3 + 16);
  v16 = a1[1];
  v17 = *a1;
  if ( v3 == v16 )
  {
    while ( v17 != v16 )
    {
      *v13 = *(_OWORD *)v17;
      v13 = (_OWORD *)((char *)v13 + 24);
      v21 = *(_QWORD *)(v17 + 16);
      v17 += 24LL;
      *((_QWORD *)v13 - 1) = v21;
    }
  }
  else
  {
    if ( v17 != v3 )
    {
      do
      {
        *v13 = *(_OWORD *)v17;
        v13 = (_OWORD *)((char *)v13 + 24);
        v18 = *(_QWORD *)(v17 + 16);
        v17 += 24LL;
        *((_QWORD *)v13 - 1) = v18;
      }
      while ( v17 != v3 );
      v16 = a1[1];
    }
    if ( v3 != v16 )
    {
      v19 = v14 + v15 - v3;
      do
      {
        *(_OWORD *)(v19 + v3 + 24) = *(_OWORD *)v3;
        *(_QWORD *)(v19 + v3 + 40) = *(_QWORD *)(v3 + 16);
        v3 += 24LL;
      }
      while ( v3 != v16 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    (__int64)a1,
    v14,
    v8,
    v11);
  return v15 + *a1;
}
