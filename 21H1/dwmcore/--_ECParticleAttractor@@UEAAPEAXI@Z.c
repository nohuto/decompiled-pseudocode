/*
 * XREFs of ??_ECParticleAttractor@@UEAAPEAXI@Z @ 0x180171A10
 * Callers:
 *     ??_ECParticleAttractor@@WFA@EAAPEAXI@Z @ 0x1800EBF00 (--_ECParticleAttractor@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CParticleAttractor *__fastcall CParticleAttractor::`vector deleting destructor'(CParticleAttractor *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x58);
    else
      operator delete(this);
  }
  return this;
}
