/*
 * XREFs of ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801DE100
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18009D960 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800AC380 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F46D0 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x18016F12C (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801DC5CC (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x1801DDFD0 (--0-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition.c)
 *     ??0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801DE3E0 (--0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::CParticleEmitterVisual(
        CParticleEmitterVisual *this,
        struct CComposition *a2)
{
  CParticleEmitter *v4; // rdi
  unsigned int *v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // edx
  CParticleEmitter *v9; // rax
  unsigned int v10; // eax
  int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // edx
  int Src; // [rsp+20h] [rbp-13A8h] BYREF
  _DWORD v16[1251]; // [rsp+24h] [rbp-13A4h]

  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
    (__int64)this,
    a2);
  *(_QWORD *)this = &CParticleEmitterVisual::`vftable';
  CParticleEmitterVisual::ParticleCollection::ParticleCollection((CParticleEmitterVisual *)((char *)this + 784));
  v4 = 0LL;
  *((_DWORD *)this + 1574) = -1;
  v5 = (unsigned int *)((char *)this + 1308);
  v6 = 5489;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  v7 = 623LL;
  *((_QWORD *)this + 158) = 0LL;
  v8 = 1;
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_DWORD *)this + 326) = 5489;
  do
  {
    v6 = v8 + 1812433253 * (v6 ^ (v6 >> 30));
    ++v8;
    *v5++ = v6;
    --v7;
  }
  while ( v7 );
  *((_DWORD *)this + 325) = 624;
  *(_QWORD *)((char *)this + 6300) = 0LL;
  *((_DWORD *)this + 1583) = 1065353216;
  *((_QWORD *)this + 792) = 1065353216LL;
  *((_DWORD *)this + 1577) = 0;
  *((_QWORD *)this + 789) = 0LL;
  *((_DWORD *)this + 1580) = 0;
  *((_QWORD *)this + 793) = 0LL;
  *((_DWORD *)this + 1588) = 0;
  *((_WORD *)this + 3178) = 1;
  *((_BYTE *)this + 6358) = 0;
  v9 = (CParticleEmitter *)KeyframeInterpolation::operator new(0x70uLL);
  if ( v9 )
    v4 = CParticleEmitter::CParticleEmitter(v9, a2);
  *((_QWORD *)this + 795) = v4;
  *((_QWORD *)v4 + 8) = this;
  v10 = std::_Random_device();
  v16[1248] = -1;
  v11 = 1;
  v12 = 1LL;
  v16[0] = v10;
  v13 = v10;
  do
  {
    v13 = v11 + 1812433253 * (v13 ^ (v13 >> 30));
    ++v11;
    v16[v12++] = v13;
  }
  while ( v12 < 624 );
  Src = 624;
  memcpy_0((char *)this + 1300, &Src, 0x1388uLL);
  CParticleEmitterVisual::InitializeParticleLists(this);
  CVisual::SetContent((struct CResource **)this, *((struct CContent **)this + 795));
  return this;
}
