/*
 * XREFs of ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x18001FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x18001FD24 (--1CLegacyAnimationTrigger@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CLegacyAnimationTrigger *__fastcall CLegacyAnimationTrigger::`scalar deleting destructor'(
        CLegacyAnimationTrigger *this,
        char a2)
{
  unsigned int v4; // r8d

  CLegacyAnimationTrigger::~CLegacyAnimationTrigger(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x60, v4);
    else
      operator delete(this);
  }
  return this;
}
