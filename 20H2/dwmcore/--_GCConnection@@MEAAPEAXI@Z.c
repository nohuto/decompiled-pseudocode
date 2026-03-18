/*
 * XREFs of ??_GCConnection@@MEAAPEAXI@Z @ 0x18014EC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CConnection@@MEAA@XZ @ 0x18014EB84 (--1CConnection@@MEAA@XZ.c)
 */

CConnection *__fastcall CConnection::`scalar deleting destructor'(CConnection *this, char a2)
{
  CConnection::~CConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x40);
    else
      operator delete(this);
  }
  return this;
}
