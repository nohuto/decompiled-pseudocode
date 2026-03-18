/*
 * XREFs of ??_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z @ 0x180260F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CDE2C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CGDISubSectionBitmapRealization *__fastcall CGDISubSectionBitmapRealization::`scalar deleting destructor'(
        CGDISubSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
