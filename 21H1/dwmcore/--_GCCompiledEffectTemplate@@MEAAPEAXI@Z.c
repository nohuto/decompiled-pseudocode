/*
 * XREFs of ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1800C6660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800C66A4 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::`scalar deleting destructor'(
        CCompiledEffectTemplate *this,
        char a2)
{
  unsigned int v4; // r8d

  CCompiledEffectTemplate::~CCompiledEffectTemplate(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50, v4);
    else
      operator delete(this);
  }
  return this;
}
