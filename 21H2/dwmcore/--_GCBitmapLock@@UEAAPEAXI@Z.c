/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x18003C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18003C2FC (--1CBitmapLock@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
