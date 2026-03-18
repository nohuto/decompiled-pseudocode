/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DEDEC
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DF510 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@PEAU12@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x1801DEF50 (--$_Uninitialized_move@PEAU-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@P.c)
 *     ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x1801E01C0 (-_Change_array@-$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V-$allocator@UAreaTriangle.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r10

  v6 = (a2 - *a1) / 28;
  v7 = (a1[1] - *a1) / 28;
  if ( v7 == 0x924924924924924LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 28;
  v10 = v9 >> 1;
  if ( v9 <= 0x924924924924924LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 28 * v11;
  if ( v11 > 0x924924924924924LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v15 = 28 * v6;
  *(_OWORD *)(v15 + v13) = *(_OWORD *)a3;
  *(_QWORD *)(v15 + v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(v15 + v13 + 24) = *(_DWORD *)(a3 + 24);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
      v17,
      a2,
      v13);
    v16 = a1[1];
    v14 = v18 + v15 + 28;
    v17 = a2;
  }
  std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
    v17,
    v16,
    v14);
  std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array(a1, v19, v8, v11);
  return v15 + *a1;
}
