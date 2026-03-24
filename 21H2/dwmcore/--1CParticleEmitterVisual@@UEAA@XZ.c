/*
 * XREFs of ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DE630
 * Callers:
 *     ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x1801DEA70 (--_ECParticleEmitterVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x180168E00 (--$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18016C8EC (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801DE70C (--1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

void __fastcall CParticleEmitterVisual::~CParticleEmitterVisual(struct CResource **this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct CResource *v4; // rcx
  struct CResource *v5; // rcx

  *this = (struct CResource *)&CParticleEmitterVisual::`vftable';
  CResource::UnRegisterNotifier<CVisualReference *>((CResource *)this, this + 89);
  v3 = (__int64)this[789];
  if ( v3 )
    std::default_delete<EmitterShapes::CSpawner>::operator()(v2, v3);
  v4 = this[159];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (this[161] - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    this[159] = 0LL;
    this[160] = 0LL;
    this[161] = 0LL;
  }
  v5 = this[156];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 48 * ((this[158] - v5) / 48));
    this[156] = 0LL;
    this[157] = 0LL;
    this[158] = 0LL;
  }
  CParticleEmitterVisual::ParticleCollection::~ParticleCollection((CParticleEmitterVisual::ParticleCollection *)(this + 98));
  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>((CVisual *)this);
}
