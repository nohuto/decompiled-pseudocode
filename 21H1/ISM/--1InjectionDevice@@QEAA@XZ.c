/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x18011FD04
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x18004ED48 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x18011F9E2 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x18011F9F5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x18011FA08 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$23 @ 0x18011FA1B (_ControllerProcessor--ControllerProcessor_--_1_--dtor$23.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121DB4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
