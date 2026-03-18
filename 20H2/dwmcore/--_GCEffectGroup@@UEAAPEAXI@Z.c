/*
 * XREFs of ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800CBEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800CBF34 (--1-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CEffectGroup *__fastcall CEffectGroup::`scalar deleting destructor'(CEffectGroup *this, char a2)
{
  unsigned int v4; // r8d

  CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x58, v4);
    else
      operator delete(this);
  }
  return this;
}
