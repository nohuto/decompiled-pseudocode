/*
 * XREFs of ??_ECParticleBehaviors@@UEAAPEAXI@Z @ 0x18019F100
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x18019D87C (--1-$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CParticleBehaviors::`vector deleting destructor'(struct CResource **this, char a2)
{
  CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>::~CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
