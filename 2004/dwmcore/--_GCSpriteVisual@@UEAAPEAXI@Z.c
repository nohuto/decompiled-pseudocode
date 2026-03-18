/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800AAFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800AB024 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  unsigned int v4; // r8d

  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x270, v4);
    else
      operator delete(this);
  }
  return this;
}
