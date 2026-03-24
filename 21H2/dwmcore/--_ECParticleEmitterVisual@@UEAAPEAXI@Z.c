/*
 * XREFs of ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x1801DEA70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DE630 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 */

struct CResource **__fastcall CParticleEmitterVisual::`vector deleting destructor'(struct CResource **this, char a2)
{
  CParticleEmitterVisual::~CParticleEmitterVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x18E0);
    else
      operator delete(this);
  }
  return this;
}
