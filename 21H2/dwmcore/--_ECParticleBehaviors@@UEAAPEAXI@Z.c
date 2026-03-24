/*
 * XREFs of ??_ECParticleBehaviors@@UEAAPEAXI@Z @ 0x18016D600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x18016B980 (--1-$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CParticleBehaviors::`vector deleting destructor'(struct CResource **this, char a2)
{
  CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>::~CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0xA0);
    else
      operator delete(this);
  }
  return this;
}
