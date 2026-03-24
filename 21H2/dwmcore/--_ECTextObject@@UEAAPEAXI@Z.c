/*
 * XREFs of ??_ECTextObject@@UEAAPEAXI@Z @ 0x18016E000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CTextObjectGeneratedT@VCTextObject@@VCContent@@@@MEAA@XZ @ 0x18016BB40 (--1-$CTextObjectGeneratedT@VCTextObject@@VCContent@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CTextObject::`vector deleting destructor'(struct CResource **this, char a2)
{
  CTextObjectGeneratedT<CTextObject,CContent>::~CTextObjectGeneratedT<CTextObject,CContent>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
