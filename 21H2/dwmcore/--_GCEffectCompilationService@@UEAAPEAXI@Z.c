/*
 * XREFs of ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x180168050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180167ED0 (--1CEffectCompilationService@@UEAA@XZ.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::`scalar deleting destructor'(
        CEffectCompilationService *this,
        char a2)
{
  CEffectCompilationService::~CEffectCompilationService(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xE0);
    else
      operator delete(this);
  }
  return this;
}
