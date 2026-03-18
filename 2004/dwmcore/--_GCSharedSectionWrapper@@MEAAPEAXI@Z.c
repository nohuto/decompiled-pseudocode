/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x1801EDB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CSharedSectionWrapper *__fastcall CSharedSectionWrapper::`scalar deleting destructor'(
        CSharedSectionWrapper *this,
        char a2)
{
  CRenderTargetBitmap *v4; // rcx

  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 7);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48);
    else
      operator delete(this);
  }
  return this;
}
