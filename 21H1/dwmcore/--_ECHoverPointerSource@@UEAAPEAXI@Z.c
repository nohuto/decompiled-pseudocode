/*
 * XREFs of ??_ECHoverPointerSource@@UEAAPEAXI@Z @ 0x180021A94
 * Callers:
 *     ??_ECHoverPointerSource@@W7EAAPEAXI@Z @ 0x1800EDD20 (--_ECHoverPointerSource@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CHoverPointerSource *__fastcall CHoverPointerSource::`vector deleting destructor'(CHoverPointerSource *this, char a2)
{
  unsigned int v4; // r8d

  CResource::~CResource((CHoverPointerSource *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50, v4);
    else
      operator delete(this);
  }
  return this;
}
