/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x18011FCA4
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x18004F338 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x18011F982 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x18011F995 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x18011F9A8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$23 @ 0x18011F9BB (_ControllerProcessor--ControllerProcessor_--_1_--dtor$23.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121D54 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
