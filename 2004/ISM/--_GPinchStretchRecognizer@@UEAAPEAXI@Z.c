/*
 * XREFs of ??_GPinchStretchRecognizer@@UEAAPEAXI@Z @ 0x180183BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PinchStretchRecognizer *__fastcall PinchStretchRecognizer::`scalar deleting destructor'(
        PinchStretchRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
