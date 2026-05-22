/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18007AA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18007A824 (--1MPCGestureHandler@@UEAA@XZ.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3F0);
  return this;
}
