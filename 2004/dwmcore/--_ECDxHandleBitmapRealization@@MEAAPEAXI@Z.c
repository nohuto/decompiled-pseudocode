/*
 * XREFs of ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800C8B50
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@OBCA@EAAPEAXI@Z @ 0x1800F2F90 (--_ECDxHandleBitmapRealization@@OBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800C8B8C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::`vector deleting destructor'(
        CDxHandleBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
