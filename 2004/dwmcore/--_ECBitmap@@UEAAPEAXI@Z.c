/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x180216DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180090644 (--1CBitmap@@UEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
