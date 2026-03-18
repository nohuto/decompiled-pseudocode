/*
 * XREFs of ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801E2360
 * Callers:
 *     ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x1801E2790 (--_ECParticleEmitterVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x180170D50 (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801E2428 (--1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

void __fastcall CParticleEmitterVisual::~CParticleEmitterVisual(CParticleEmitterVisual *this)
{
  __int64 v1; // rdx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 789);
  if ( v1 )
    std::default_delete<EmitterShapes::CSpawner>::operator()((__int64)this, v1);
  v3 = (void *)*((_QWORD *)this + 159);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 161) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 159) = 0LL;
    *((_QWORD *)this + 160) = 0LL;
    *((_QWORD *)this + 161) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 156);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 48 * ((*((_QWORD *)this + 158) - (_QWORD)v4) / 48LL));
    *((_QWORD *)this + 156) = 0LL;
    *((_QWORD *)this + 157) = 0LL;
    *((_QWORD *)this + 158) = 0LL;
  }
  CParticleEmitterVisual::ParticleCollection::~ParticleCollection((CParticleEmitterVisual *)((char *)this + 784));
  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(this);
}
