/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB7E0
 * Callers:
 *     ?OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ @ 0x1801E2990 (-OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DB0BC (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  int *v2; // rbx
  int *v3; // rsi
  __int64 *v4; // rdi
  bool v5; // zf
  int v6; // xmm0_4
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // xmm1_8
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v2 = (int *)a2[1];
  v3 = &v2[6 * *a2];
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = v2[5] == 1;
      v6 = *v2;
      *(_OWORD *)&v11[4] = *(_OWORD *)(v2 + 1);
      *(_DWORD *)v11 = v6;
      if ( v5 )
      {
        *(_DWORD *)&v11[20] = 1065353216;
      }
      else
      {
        *(_DWORD *)&v11[20] = 0;
        if ( v2[5] == 2 )
        {
          v12 = 1065353216;
          goto LABEL_6;
        }
      }
      v12 = 0;
LABEL_6:
      v7 = v4[1];
      if ( v4[2] == v7 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
          v4,
          v7,
          (__int64)v11);
      }
      else
      {
        v8 = v12;
        v9 = *(_QWORD *)&v11[16];
        *(_OWORD *)v7 = *(_OWORD *)v11;
        *(_QWORD *)(v7 + 16) = v9;
        *(_DWORD *)(v7 + 24) = v8;
        v4[1] += 28LL;
      }
      v2 += 6;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
