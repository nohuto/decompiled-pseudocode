/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800504E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18005061C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        char a2)
{
  unsigned int v4; // r8d

  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x6C8, v4);
    else
      operator delete(this);
  }
  return this;
}
