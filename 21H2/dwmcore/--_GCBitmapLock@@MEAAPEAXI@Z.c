/*
 * XREFs of ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x18006EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x18006EB2C (--1CBitmapLock@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
