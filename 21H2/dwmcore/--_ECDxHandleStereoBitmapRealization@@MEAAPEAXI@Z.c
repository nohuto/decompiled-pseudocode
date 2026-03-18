/*
 * XREFs of ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1802A47B0
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@OBEA@EAAPEAXI@Z @ 0x18010C150 (--_ECDxHandleStereoBitmapRealization@@OBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802A468C (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::`vector deleting destructor'(
        CDxHandleStereoBitmapRealization *this,
        char a2)
{
  CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
