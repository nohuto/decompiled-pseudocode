/*
 * XREFs of ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800D6DB0
 * Callers:
 *     ??_ECGDIBitmapRealization@@WBCA@EAAPEAXI@Z @ 0x1800F2BF0 (--_ECGDIBitmapRealization@@WBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004532C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CGDIBitmapRealization *__fastcall CGDIBitmapRealization::`vector deleting destructor'(
        CGDIBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
