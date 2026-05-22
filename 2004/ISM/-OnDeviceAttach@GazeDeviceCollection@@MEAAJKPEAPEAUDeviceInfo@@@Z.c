/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x18009D658 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(GazeDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  GazeHidDevice *v10; // rsi
  unsigned int v11; // edi
  struct GazeDeviceInfo *v12; // rcx
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  struct RIMDevice *v15[3]; // [rsp+38h] [rbp-28h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct GazeDeviceInfo *v18; // [rsp+98h] [rbp+38h] BYREF

  v15[0] = 0LL;
  v18 = 0LL;
  v6 = operator new(0x60CuLL);
  memset_0(v6, 0, 0x60CuLL);
  v6[2] = 1548;
  Src = v6;
  v15[1] = (struct RIMDevice *)&Src;
  v15[2] = (struct RIMDevice *)&v18;
  v16 = 1;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, (struct DeviceInfo **)&Src);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 135LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    v12 = v18;
    goto LABEL_9;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, v15, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 139LL;
    goto LABEL_7;
  }
  v10 = v15[0];
  v11 = *((_DWORD *)v15[0] + 14) + 1592;
  v18 = (struct GazeDeviceInfo *)operator new(v11);
  memset_0(v18, 0, v11);
  memcpy_0(v18, Src, 0x60CuLL);
  *((_DWORD *)v18 + 2) = v11;
  Device = GazeHidDevice::Initialize(v10, v18);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 156LL;
    goto LABEL_7;
  }
  *a3 = v18;
  v12 = 0LL;
  v18 = 0LL;
  v8 = 0;
LABEL_9:
  if ( Src )
  {
    operator delete(Src, (const struct std::nothrow_t *)0x60C);
    Src = 0LL;
    v12 = v18;
  }
  if ( v12 )
    operator delete(v12, (const struct std::nothrow_t *)0x638);
  return v8;
}
