/*
 * XREFs of ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800B80F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800B8134 (--1CAnimation@@UEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CAnimation *__fastcall CAnimation::`scalar deleting destructor'(CAnimation *this, char a2)
{
  unsigned int v4; // r8d

  CAnimation::~CAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x130, v4);
    else
      operator delete(this);
  }
  return this;
}
