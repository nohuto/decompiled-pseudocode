/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1802A1930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18005DE1C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
