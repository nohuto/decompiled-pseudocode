/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18007AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18007ACD4 (--1MPCGestureHandler@@UEAA@XZ.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3F0);
  return this;
}
