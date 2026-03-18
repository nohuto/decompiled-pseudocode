/*
 * XREFs of ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x18016E980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B3604 (--1CDesktopTree@@UEAA@XZ.c)
 */

CDesktopTree *__fastcall CDesktopTree::`scalar deleting destructor'(CDesktopTree *this, char a2)
{
  CDesktopTree::~CDesktopTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x19F0);
    else
      operator delete(this);
  }
  return this;
}
