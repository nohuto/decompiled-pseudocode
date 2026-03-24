/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DAD5C
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB658 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801DC400 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
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
  __int64 v13; // r10
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v21; // eax

  v3 = a2;
  v6 = (a2 - *a1) / 20;
  v7 = (a1[1] - *a1) / 20;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 20;
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 20 * v11;
  if ( v11 > 0xCCCCCCCCCCCCCCCLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 20 * v6;
  v15 = v13;
  *(_OWORD *)(v14 + v13) = *(_OWORD *)a3;
  *(_DWORD *)(v14 + v13 + 16) = *(_DWORD *)(a3 + 16);
  v16 = a1[1];
  v17 = *a1;
  if ( v3 == v16 )
  {
    while ( v17 != v16 )
    {
      *(_OWORD *)v15 = *(_OWORD *)v17;
      v21 = *(_DWORD *)(v17 + 16);
      v17 += 20LL;
      *(_DWORD *)(v15 + 16) = v21;
      v15 += 20LL;
    }
  }
  else
  {
    if ( v17 != v3 )
    {
      do
      {
        *(_OWORD *)v15 = *(_OWORD *)v17;
        v18 = *(_DWORD *)(v17 + 16);
        v17 += 20LL;
        *(_DWORD *)(v15 + 16) = v18;
        v15 += 20LL;
      }
      while ( v17 != v3 );
      v16 = a1[1];
    }
    if ( v3 != v16 )
    {
      v19 = v13 + v14 - v3;
      do
      {
        *(_OWORD *)(v19 + v3 + 20) = *(_OWORD *)v3;
        *(_DWORD *)(v19 + v3 + 36) = *(_DWORD *)(v3 + 16);
        v3 += 20LL;
      }
      while ( v3 != v16 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(a1, v13, v8, v11);
  return v14 + *a1;
}
