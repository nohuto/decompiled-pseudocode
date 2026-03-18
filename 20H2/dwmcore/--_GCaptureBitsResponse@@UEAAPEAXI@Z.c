/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180192E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x1800508F0 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::`scalar deleting destructor'(CaptureBitsResponse *this, char a2)
{
  CaptureBitsResponse::~CaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x6B8);
    else
      operator delete(this);
  }
  return this;
}
