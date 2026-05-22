/*
 * XREFs of ??_GRIMDevice@@UEAAPEAXI@Z @ 0x18009C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RIMDevice@@UEAA@XZ @ 0x18009C980 (--1RIMDevice@@UEAA@XZ.c)
 */

RIMDevice *__fastcall RIMDevice::`scalar deleting destructor'(RIMDevice *this, char a2)
{
  RIMDevice::~RIMDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
