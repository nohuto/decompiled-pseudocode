/*
 * XREFs of ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801C8930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1801C88FC (--1CInjectionAnimation@@UEAA@XZ.c)
 */

void **__fastcall CInjectionAnimation::`vector deleting destructor'(void **this, char a2)
{
  CInjectionAnimation::~CInjectionAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x150);
    else
      operator delete(this);
  }
  return this;
}
