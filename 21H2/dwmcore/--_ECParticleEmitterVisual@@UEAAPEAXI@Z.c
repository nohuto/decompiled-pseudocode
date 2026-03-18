/*
 * XREFs of ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x18022DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x18022D634 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::`vector deleting destructor'(
        CParticleEmitterVisual *this,
        char a2)
{
  CParticleEmitterVisual::~CParticleEmitterVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
