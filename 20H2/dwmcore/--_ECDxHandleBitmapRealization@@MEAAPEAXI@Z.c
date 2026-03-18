/*
 * XREFs of ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800452F0
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@OBCA@EAAPEAXI@Z @ 0x1800F2BE0 (--_ECDxHandleBitmapRealization@@OBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004532C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::`vector deleting destructor'(
        CDxHandleBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1D8uLL);
  return this;
}
