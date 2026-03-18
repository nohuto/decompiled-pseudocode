/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1801F2C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1801F2BC8 (--1CVisualCapture@@UEAA@XZ.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  CVisualCapture::~CVisualCapture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x7D0);
    else
      operator delete(this);
  }
  return this;
}
