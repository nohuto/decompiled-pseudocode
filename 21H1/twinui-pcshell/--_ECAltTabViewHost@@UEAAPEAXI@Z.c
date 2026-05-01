/*
 * XREFs of ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x18036B590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x18036B48C (--1CAltTabViewHost@@UEAA@XZ.c)
 */

CAltTabViewHost *__fastcall CAltTabViewHost::`vector deleting destructor'(CAltTabViewHost *this, char a2)
{
  CAltTabViewHost::~CAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
