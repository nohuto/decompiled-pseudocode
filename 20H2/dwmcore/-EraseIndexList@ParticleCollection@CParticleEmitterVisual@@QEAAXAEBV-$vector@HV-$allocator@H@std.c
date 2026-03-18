/*
 * XREFs of ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801DF74C
 * Callers:
 *     ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E0244 (-RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     ??$EraseIndexList@MV?$allocator@M@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@MV?$allocator@M@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DBD2C (--$EraseIndexList@MV-$allocator@M@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV-$ve.c)
 *     ??$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DBD94 (--$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ??$EraseIndexList@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DBE08 (--$EraseIndexList@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics@Foundation@.c)
 *     ??$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DBE94 (--$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@.c)
 */

__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  char **v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char **v11; // r8
  __int64 v12; // rcx
  char **v13; // r8
  __int64 v14; // rcx
  char **v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  char **v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char **v26; // r8
  __int64 v27; // rcx
  char **v28; // r8
  __int64 result; // rax

  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    a1,
    (__int64 *)a1,
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v4,
    (_QWORD *)(a1 + 24),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v5,
    (__int64 *)(a1 + 48),
    v6);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v7,
    (__int64 *)(a1 + 72),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v8,
    (__int64 *)(a1 + 96),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v9,
    (_QWORD *)(a1 + 120),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v10,
    (__int64 *)(a1 + 144),
    v11);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v12,
    (__int64 *)(a1 + 168),
    v13);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v14,
    (__int64 *)(a1 + 192),
    v15);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v16,
    (__int64 *)(a1 + 216),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v17,
    (__int64 *)(a1 + 240),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v18,
    (_QWORD *)(a1 + 264),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v19,
    (__int64 *)(a1 + 288),
    v20);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v21,
    (__int64 *)(a1 + 312),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v22,
    (__int64 *)(a1 + 336),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v23,
    (__int64 *)(a1 + 360),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v24,
    (_QWORD *)(a1 + 384),
    (char **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v25,
    (__int64 *)(a1 + 408),
    v26);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v27,
    (__int64 *)(a1 + 432),
    v28);
  result = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *(_DWORD *)(a1 + 456) -= result;
  return result;
}
