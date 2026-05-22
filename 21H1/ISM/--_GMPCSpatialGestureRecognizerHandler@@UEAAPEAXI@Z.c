/*
 * XREFs of ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x180080550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x1800804C4 (--1MPCSpatialGestureRecognizerHandler@@UEAA@XZ.c)
 */

MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::`scalar deleting destructor'(
        MPCSpatialGestureRecognizerHandler *this,
        char a2)
{
  MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
