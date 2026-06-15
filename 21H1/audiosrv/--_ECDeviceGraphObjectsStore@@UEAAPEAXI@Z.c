/*
 * XREFs of ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800E8520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E7F88 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 */

CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::`vector deleting destructor'(
        CDeviceGraphObjectsStore *this,
        char a2)
{
  CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
