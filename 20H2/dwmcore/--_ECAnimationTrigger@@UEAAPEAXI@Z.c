/*
 * XREFs of ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x1801B6070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x1801B5FF0 (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 */

CAnimationTrigger *__fastcall CAnimationTrigger::`vector deleting destructor'(CAnimationTrigger *this, char a2)
{
  CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x70);
    else
      operator delete(this);
  }
  return this;
}
