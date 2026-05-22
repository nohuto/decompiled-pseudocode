/*
 * XREFs of ??1?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009B244
 * Callers:
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18009B42D (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x18009B539 (_PenDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x18009B615 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x18009C2AB (_DockableDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x18009C3B5 (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::~com_ptr_t<PenDeviceManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**(__int64 (__fastcall ***)(__int64))(v1 + 16))(v1 + 16);
  return result;
}
