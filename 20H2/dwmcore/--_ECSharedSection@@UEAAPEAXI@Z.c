/*
 * XREFs of ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800D3F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800D3F7C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CSharedSection *__fastcall CSharedSection::`vector deleting destructor'(CSharedSection *this, char a2)
{
  unsigned int v4; // r8d

  *(_QWORD *)this = &CSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50, v4);
    else
      operator delete(this);
  }
  return this;
}
