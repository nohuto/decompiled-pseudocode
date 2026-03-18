/*
 * XREFs of ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x18020A820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x18020A7C8 (--1CCompositionSwapchainStatistics@@MEAA@XZ.c)
 */

CCompositionSwapchainStatistics *__fastcall CCompositionSwapchainStatistics::`vector deleting destructor'(
        CCompositionSwapchainStatistics *this,
        char a2)
{
  CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x70);
    else
      operator delete(this);
  }
  return this;
}
