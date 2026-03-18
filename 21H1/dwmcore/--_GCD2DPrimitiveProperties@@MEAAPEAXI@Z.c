/*
 * XREFs of ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x18024BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x18024BE28 (--1CD2DPrimitiveProperties@@MEAA@XZ.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::`scalar deleting destructor'(
        CD2DPrimitiveProperties *this,
        char a2)
{
  CD2DPrimitiveProperties::~CD2DPrimitiveProperties(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
