/*
 * XREFs of ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1801BDF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800AB15C (--1CVisual@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x1801688F0 (--$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z.c)
 */

struct CResource **__fastcall CCursorVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCursorVisual::`vftable';
  CResource::UnRegisterNotifier<CVisualReference *>((CResource *)this, this + 80);
  CVisual::~CVisual((CVisual *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x288);
    else
      operator delete(this);
  }
  return this;
}
