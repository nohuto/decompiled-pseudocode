/*
 * XREFs of ??_GCPolygon@@UEAAPEAXI@Z @ 0x1801FA1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x1801FA164 (--1CPolygon@@UEAA@XZ.c)
 */

CPolygon *__fastcall CPolygon::`scalar deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x110);
    else
      operator delete(this);
  }
  return this;
}
