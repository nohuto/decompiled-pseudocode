/*
 * XREFs of ??_GCGDISectionBitmapRealization@@UEAAPEAXI@Z @ 0x18008D470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18008D4AC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CGDISectionBitmapRealization *__fastcall CGDISectionBitmapRealization::`scalar deleting destructor'(
        CGDISectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
