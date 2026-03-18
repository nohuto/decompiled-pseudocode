/*
 * XREFs of ??_GCSceneNode@@MEAAPEAXI@Z @ 0x1801EF270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x1801EF1C0 (--1CSceneNode@@MEAA@XZ.c)
 */

CSceneNode *__fastcall CSceneNode::`scalar deleting destructor'(CSceneNode *this, char a2)
{
  CSceneNode::~CSceneNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88);
    else
      operator delete(this);
  }
  return this;
}
