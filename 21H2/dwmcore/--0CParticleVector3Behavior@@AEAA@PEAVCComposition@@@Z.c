/*
 * XREFs of ??0CParticleVector3Behavior@@AEAA@PEAVCComposition@@@Z @ 0x18019D09C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleVector3Behavior *__fastcall CParticleVector3Behavior::CParticleVector3Behavior(
        CParticleVector3Behavior *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &CParticleVector3Behavior::`vftable'{for `CParticleVector3BehaviorGeneratedT<CParticleVector3Behavior,CParticleBaseBehavior>'};
  *((_QWORD *)this + 14) = &CParticleColorBehavior::`vftable'{for `Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>'};
  return this;
}
