/*
 * XREFs of ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801EF210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801ED4E8 (--1-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CSuperWetInkVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CSuperWetInkVisual::`vftable';
  CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x270);
    else
      operator delete(this);
  }
  return this;
}
