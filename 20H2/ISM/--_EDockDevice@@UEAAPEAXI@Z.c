/*
 * XREFs of ??_EDockDevice@@UEAAPEAXI@Z @ 0x18009CA60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HIDDevice@@UEAA@XZ @ 0x18009CA0C (--1HIDDevice@@UEAA@XZ.c)
 */

DockDevice *__fastcall DockDevice::`vector deleting destructor'(DockDevice *this, const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  HIDDevice::~HIDDevice(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
