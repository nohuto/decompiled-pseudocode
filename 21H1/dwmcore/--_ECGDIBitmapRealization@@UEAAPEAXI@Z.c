/*
 * XREFs of ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800C1DE0
 * Callers:
 *     ??_ECGDIBitmapRealization@@WBCA@EAAPEAXI@Z @ 0x1800F0010 (--_ECGDIBitmapRealization@@WBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800C1E5C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
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
