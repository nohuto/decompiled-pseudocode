/*
 * XREFs of ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180217AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180217A5C (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmapLockUnaligned::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmapLockUnaligned::~CBitmapLockUnaligned(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0xC0);
    else
      operator delete(this);
  }
  return this;
}
