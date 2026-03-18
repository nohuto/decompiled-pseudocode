/*
 * XREFs of ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800438E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180043930 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800450C4 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::`vector deleting destructor'(
        CGlobalCompositionSurfaceInfo *this,
        char a2)
{
  unsigned int v4; // r8d

  CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x168, v4);
    else
      operator delete(this);
  }
  return this;
}
