/*
 * XREFs of ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x18009ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ??0GazeHidDevice@@QEAA@PEAX0KK@Z @ 0x18009AC68 (--0GazeHidDevice@@QEAA@PEAX0KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::CreateDevice(
        GazeDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  struct RIMDevice *v9; // rax
  GazeHidDevice *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = (GazeHidDevice *)operator new(0xF0uLL);
  v9 = GazeHidDevice::GazeHidDevice(v11, a2, a3, a4, a5);
  if ( v9 )
  {
    *a6 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
