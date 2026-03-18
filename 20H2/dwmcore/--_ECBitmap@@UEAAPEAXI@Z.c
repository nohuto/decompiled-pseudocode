/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x180214F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x180049994 (--1CBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
