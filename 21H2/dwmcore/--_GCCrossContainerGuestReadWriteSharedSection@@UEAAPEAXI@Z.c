/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1801BE960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800D8D4C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCrossContainerGuestReadWriteSharedSection *__fastcall CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(
        CCrossContainerGuestReadWriteSharedSection *this,
        char a2)
{
  *(_QWORD *)this = &CCrossContainerGuestReadWriteSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x60);
    else
      operator delete(this);
  }
  return this;
}
