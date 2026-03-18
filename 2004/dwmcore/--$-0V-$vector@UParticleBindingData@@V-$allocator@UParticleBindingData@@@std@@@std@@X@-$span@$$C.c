/*
 * XREFs of ??$?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@X@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1801DD8C8
 * Callers:
 *     ?OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ @ 0x1801DD940 (-OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x1801E3CB0 (-OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ @ 0x1801E3CF0 (-OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ.c)
 *     ?OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ @ 0x1801E3D30 (-OnBindingsChanged@CParticleVector4Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>(
        __int64 *a1,
        gsl::details **a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  gsl::details *v6; // rcx

  v4 = (__int64)((unsigned __int128)((a2[1] - *a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v5 = gsl::narrow<__int64,unsigned __int64>(v4 + (v4 >> 63));
  v6 = *a2;
  *a1 = v5;
  if ( v5 < 0 || (a1[1] = (__int64)v6) == 0 && v5 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v6);
    __debugbreak();
  }
  return a1;
}
