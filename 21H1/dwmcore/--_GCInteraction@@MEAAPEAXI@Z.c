/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800DB200
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800EDD60 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DB244 (--1CInteraction@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  unsigned int v4; // r8d

  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x6C0, v4);
    else
      operator delete(this);
  }
  return this;
}
