/*
 * XREFs of ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x180162430
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801548C0 (--1CComposition@@MEAA@XZ.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::`vector deleting destructor'(CGlobalComposition *this, char a2)
{
  CDrawListEntry *v4; // rcx

  *(_QWORD *)this = &CGlobalComposition::`vftable';
  v4 = (CDrawListEntry *)*((_QWORD *)this + 149);
  if ( v4 )
    CDrawListEntry::Release(v4);
  CComposition::~CComposition(this, a2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x4B0);
    else
      operator delete(this);
  }
  return this;
}
