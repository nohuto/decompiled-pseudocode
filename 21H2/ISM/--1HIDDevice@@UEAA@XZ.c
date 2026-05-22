/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x18009CE6C
 * Callers:
 *     _GazeHidDevice::GazeHidDevice_::_1_::dtor$0 @ 0x18009B12E (_GazeHidDevice--GazeHidDevice_--_1_--dtor$0.c)
 *     ??_EDockDevice@@UEAAPEAXI@Z @ 0x18009CEC0 (--_EDockDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x18009D7A8 (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDevice::~HIDDevice(HIDDevice *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &DockDevice::`vftable';
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  memset_0((char *)this + 60, 0, 0x40uLL);
  RIMDevice::~RIMDevice(this);
}
