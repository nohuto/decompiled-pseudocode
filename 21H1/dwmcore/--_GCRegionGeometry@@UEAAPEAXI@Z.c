/*
 * XREFs of ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800C42C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800C433C (--1CGeometry@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRegionGeometry *__fastcall CRegionGeometry::`scalar deleting destructor'(CRegionGeometry *this, char a2)
{
  void *v4; // rcx
  unsigned int v5; // r8d

  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 19) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA8, v5);
    else
      operator delete(this);
  }
  return this;
}
