/*
 * XREFs of ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18016F480
 * Callers:
 *     ??_ECRadialGradientBrush@@WFA@EAAPEAXI@Z @ 0x1800EEF00 (--_ECRadialGradientBrush@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E7B94 (--1CGradientBrush@@MEAA@XZ.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::`scalar deleting destructor'(
        CRadialGradientBrush *this,
        char a2)
{
  CDrawListEntry *v4; // rcx

  v4 = (CDrawListEntry *)*((_QWORD *)this + 23);
  if ( v4 )
    CDrawListEntry::Release(v4);
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x100);
    else
      operator delete(this);
  }
  return this;
}
