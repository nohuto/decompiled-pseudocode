/*
 * XREFs of ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x180270B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x18005FAAC (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
