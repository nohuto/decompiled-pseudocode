/*
 * XREFs of ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x18011FD24
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x18011FA27 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121DB4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardInjectionDevice::~KeyboardInjectionDevice(KeyboardInjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
