/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x18011F7B4
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x18004E708 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x18011F492 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x18011F4A5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x18011F4B8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$23 @ 0x18011F4CB (_ControllerProcessor--ControllerProcessor_--_1_--dtor$23.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121864 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
