/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DF44C
 * Callers:
 *     ?OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ @ 0x1801E02C0 (-OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DEC38 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rdi
  bool v5; // zf
  __int64 v6; // xmm1_8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = a2[1];
  v3 = v2 + 24LL * *a2;
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = *(_DWORD *)(v2 + 20) == 1;
      v6 = *(_QWORD *)(v2 + 4);
      v7 = *(_DWORD *)(v2 + 12);
      LODWORD(v11) = *(_DWORD *)v2;
      *(_QWORD *)((char *)&v11 + 4) = v6;
      HIDWORD(v11) = v7;
      if ( v5 )
      {
        LODWORD(v12) = 1065353216;
      }
      else
      {
        LODWORD(v12) = 0;
        if ( *(_DWORD *)(v2 + 20) == 2 )
        {
          HIDWORD(v12) = 1065353216;
          goto LABEL_6;
        }
      }
      HIDWORD(v12) = 0;
LABEL_6:
      v8 = v4[1];
      if ( v4[2] == v8 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
          v4,
          v8,
          (__int64)&v11);
      }
      else
      {
        v9 = v12;
        *(_OWORD *)v8 = v11;
        *(_QWORD *)(v8 + 16) = v9;
        v4[1] += 24LL;
      }
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
