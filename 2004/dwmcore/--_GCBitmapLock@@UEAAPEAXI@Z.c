/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x1800928D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18009290C (--1CBitmapLock@@UEAA@XZ.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
