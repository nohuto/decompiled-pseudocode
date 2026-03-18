/*
 * XREFs of ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x1801F7C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180025C94 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCompositionLight *__fastcall CCompositionLight::`scalar deleting destructor'(CCompositionLight *this, char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xF8);
    else
      operator delete(this);
  }
  return this;
}
