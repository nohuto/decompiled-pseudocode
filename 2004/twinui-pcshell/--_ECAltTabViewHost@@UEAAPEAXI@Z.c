/*
 * XREFs of ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x18038CAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x18038C99C (--1CAltTabViewHost@@UEAA@XZ.c)
 */

CAltTabViewHost *__fastcall CAltTabViewHost::`vector deleting destructor'(CAltTabViewHost *this, char a2)
{
  CAltTabViewHost::~CAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
