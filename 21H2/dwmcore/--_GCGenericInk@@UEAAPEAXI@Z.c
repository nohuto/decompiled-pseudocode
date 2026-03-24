/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18016D1A0
 * Callers:
 *     ??_ECGenericInk@@WEI@EAAPEAXI@Z @ 0x1800F4960 (--_ECGenericInk@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x1801C24BC (--1CGenericInk@@UEAA@XZ.c)
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
