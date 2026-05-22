/*
 * XREFs of ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x18009C468 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x180126758 (-OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::OnDeviceAttach(
        DockableDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rbx
  int Device; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v12; // rax
  KeyboardDockServer *v13; // rdi
  struct DeviceInfo *v15; // [rsp+30h] [rbp-38h] BYREF
  KeyboardDockServer *v16; // [rsp+38h] [rbp-30h]
  struct RIMDevice *v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct RIMDevice *v19; // [rsp+88h] [rbp+20h] BYREF

  v6 = (struct RIMDevice *)operator new(0x628uLL);
  v19 = v6;
  memset_0(v6, 0, 0x628uLL);
  *((_DWORD *)v6 + 2) = 1548;
  v17 = v6;
  v15 = v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, &v15);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 74LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_15;
  }
  v19 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v19, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 80);
    goto LABEL_7;
  }
  Device = DockableDeviceCollection::PopulateDeviceInfo(this, v19, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 82LL;
    goto LABEL_7;
  }
  if ( *((_WORD *)v6 + 784) == 1 && *((_WORD *)v6 + 785) == 6 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
    v13 = (KeyboardDockServer *)v12;
    v16 = (KeyboardDockServer *)v12;
    if ( v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v12 + 24), 1u);
      v13 = v16;
    }
    KeyboardDockServer::OnDockableDeviceArrival(v13, v6);
    if ( v13 )
      (**((void (__fastcall ***)(__int64))v13 + 2))((__int64)v13 + 16);
  }
  *a3 = v15;
  v6 = 0LL;
  v8 = 0;
LABEL_15:
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x628);
  return v8;
}
