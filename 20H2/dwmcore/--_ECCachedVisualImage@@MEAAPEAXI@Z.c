/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18003F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18003F1BC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  unsigned int v4; // r8d

  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x750, v4);
    else
      operator delete(this);
  }
  return this;
}
