/*
 * XREFs of ??_ECParticleEmitterVisual@@UEAAPEAXI@Z @ 0x1801E2790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801E2360 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::`vector deleting destructor'(
        CParticleEmitterVisual *this,
        char a2)
{
  CParticleEmitterVisual::~CParticleEmitterVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x18E0);
    else
      operator delete(this);
  }
  return this;
}
