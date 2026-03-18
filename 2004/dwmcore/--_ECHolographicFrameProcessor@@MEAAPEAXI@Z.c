/*
 * XREFs of ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x18025A958
 * Callers:
 *     ??_ECHolographicFrameProcessor@@O7EAAPEAXI@Z @ 0x1800F2B30 (--_ECHolographicFrameProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x18025A888 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 */

CHolographicFrameProcessor *__fastcall CHolographicFrameProcessor::`vector deleting destructor'(
        CHolographicFrameProcessor *this,
        char a2)
{
  CHolographicFrameProcessor::~CHolographicFrameProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98);
    else
      operator delete(this);
  }
  return this;
}
