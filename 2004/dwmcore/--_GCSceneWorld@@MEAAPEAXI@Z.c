/*
 * XREFs of ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x18020A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x18020A6BC (--1CSceneWorld@@MEAA@XZ.c)
 */

CSceneWorld *__fastcall CSceneWorld::`scalar deleting destructor'(CSceneWorld *this, char a2)
{
  CSceneWorld::~CSceneWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xB0);
    else
      operator delete(this);
  }
  return this;
}
