/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18016CC90
 * Callers:
 *     ??_ECGenericInk@@WEI@EAAPEAXI@Z @ 0x1800EEB50 (--_ECGenericInk@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x1801C197C (--1CGenericInk@@UEAA@XZ.c)
 */

CGenericInk *__fastcall CGenericInk::`scalar deleting destructor'(CGenericInk *this, char a2)
{
  CGenericInk::~CGenericInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x198);
    else
      operator delete(this);
  }
  return this;
}
