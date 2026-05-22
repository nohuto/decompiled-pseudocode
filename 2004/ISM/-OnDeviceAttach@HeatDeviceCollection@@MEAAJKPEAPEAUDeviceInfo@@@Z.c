/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(HeatDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  char *v6; // rbx
  int Device; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdi
  struct DeviceInfo *v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct RIMDevice *v18; // [rsp+B8h] [rbp+48h] BYREF

  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = (char *)operator new(0x60CuLL);
  memset_0(v6, 0, 0x60CuLL);
  *((_DWORD *)v6 + 2) = 1548;
  v13[1] = (struct DeviceInfo *)v6;
  v13[0] = (struct DeviceInfo *)v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, v13);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 110LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_9;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v18, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 115);
    goto LABEL_5;
  }
  v11 = *((_QWORD *)v18 + 2);
  NtRIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v11);
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v11, &v14) >= 0 )
  {
    *(_QWORD *)(v6 + 20) = v15;
    *((_DWORD *)v6 + 7) = DWORD2(v15);
  }
  *a3 = v13[0];
  v6 = 0LL;
  v8 = 0;
LABEL_9:
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x60C);
  return v8;
}
