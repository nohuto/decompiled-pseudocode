/*
 * XREFs of ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x180172220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ @ 0x18016FF04 (--1-$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CSceneModelTransform::`vector deleting destructor'(struct CResource **this, char a2)
{
  CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::~CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x40);
    else
      operator delete(this);
  }
  return this;
}
