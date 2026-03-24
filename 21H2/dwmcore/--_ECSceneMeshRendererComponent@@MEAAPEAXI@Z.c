/*
 * XREFs of ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x1801E96F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1801E962C (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 */

CSceneMeshRendererComponent *__fastcall CSceneMeshRendererComponent::`vector deleting destructor'(
        CSceneMeshRendererComponent *this,
        char a2)
{
  CSceneMeshRendererComponent::~CSceneMeshRendererComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x70);
    else
      operator delete(this);
  }
  return this;
}
