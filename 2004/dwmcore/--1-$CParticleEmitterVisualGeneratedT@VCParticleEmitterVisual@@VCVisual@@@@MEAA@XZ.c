/*
 * XREFs of ??1?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ @ 0x1801DF8FC
 * Callers:
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DF9E0 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18016A6F0 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        CVisual *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 89));
  *((_QWORD *)this + 89) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 90));
  *((_QWORD *)this + 90) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 91));
  *((_QWORD *)this + 91) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 92));
  *((_QWORD *)this + 92) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 93));
  *((_QWORD *)this + 93) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 94));
  *((_QWORD *)this + 94) = 0LL;
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (__int64)this + 760);
  if ( *((_QWORD *)this + 95) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 95),
      (*((_QWORD *)this + 97) - *((_QWORD *)this + 95)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  CVisual::~CVisual(this);
}
