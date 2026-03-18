/*
 * XREFs of ??_ECTextVisual@@MEAAPEAXI@Z @ 0x1801F22A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1801F21BC (--1-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ.c)
 */

void **__fastcall CTextVisual::`vector deleting destructor'(void **this, char a2)
{
  CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x2B0);
    else
      operator delete(this);
  }
  return this;
}
