/*
 * XREFs of ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x180262EA0
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@OBCA@EAAPEAXI@Z @ 0x1800F34B0 (--_ECDxHandleStereoBitmapRealization@@OBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180262D70 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
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
