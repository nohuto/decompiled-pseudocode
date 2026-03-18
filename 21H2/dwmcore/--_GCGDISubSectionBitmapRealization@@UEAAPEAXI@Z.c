/*
 * XREFs of ??_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z @ 0x1802A23C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18005DE1C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
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
