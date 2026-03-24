/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB658
 * Callers:
 *     ?OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ @ 0x1801E2950 (-OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DAD5C (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rsi
  __int64 *v4; // rdi
  bool v5; // zf
  unsigned int v6; // xmm1_4
  unsigned int v7; // xmm2_4
  __int64 v8; // rdx
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v2 = (_DWORD *)a2[1];
  v3 = &v2[6 * *a2];
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = v2[5] == 1;
      v6 = v2[1];
      v7 = v2[2];
      LODWORD(v11) = *v2;
      *(_QWORD *)((char *)&v11 + 4) = __PAIR64__(v7, v6);
      if ( v5 )
      {
        HIDWORD(v11) = 1065353216;
      }
      else
      {
        HIDWORD(v11) = 0;
        if ( v2[5] == 2 )
        {
          v12 = 1065353216;
          goto LABEL_6;
        }
      }
      v12 = 0;
LABEL_6:
      v8 = v4[1];
      if ( v4[2] == v8 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
          v4,
          v8,
          (__int64)&v11);
      }
      else
      {
        v9 = v12;
        *(_OWORD *)v8 = v11;
        *(_DWORD *)(v8 + 16) = v9;
        v4[1] += 20LL;
      }
      v2 += 6;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
