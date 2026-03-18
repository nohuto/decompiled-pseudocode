/*
 * XREFs of ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x18021ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x18021AA8C (--1CFormatConverter@@UEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::`vector deleting destructor'(CFormatConverter *this, char a2)
{
  CFormatConverter::~CFormatConverter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x330);
    else
      operator delete(this);
  }
  return this;
}
