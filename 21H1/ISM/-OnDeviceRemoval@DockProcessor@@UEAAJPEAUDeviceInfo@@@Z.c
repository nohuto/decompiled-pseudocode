/*
 * XREFs of ?OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180188650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDockDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x180126AE8 (-OnDockDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 */

__int64 __fastcall DockProcessor::OnDeviceRemoval(DockProcessor *this, struct DeviceInfo *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeyboardDockServer::OnDockDeviceRemoval(*((__int64 ***)this + 9), *((struct DockDeviceInfo **)this + 5));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
