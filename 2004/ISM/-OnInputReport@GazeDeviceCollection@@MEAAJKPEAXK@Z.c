/*
 * XREFs of ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B100
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CB3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18009D478 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::OnInputReport(GazeDeviceCollection *this, int a2, char *a3, unsigned int a4)
{
  int Device; // ebx
  __int64 v8; // rdx
  struct RIMDevice *v10; // rsi
  struct _HIDP_CAPS *v11; // r15
  __int64 v12; // r12
  unsigned int InputReportByteLength; // ecx
  int InputInfoForReport; // eax
  __int64 v15; // rax
  bool v16[8]; // [rsp+30h] [rbp-20h] BYREF
  struct RIMDevice *v17; // [rsp+38h] [rbp-18h] BYREF
  struct _HIDP_CAPS *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v17 = 0LL;
  v18[0] = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v17, 0LL);
  if ( Device < 0 )
  {
    v8 = 195LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v10 = v17;
  Device = HIDDevice::GetHIDCapabilities(v17, v18);
  if ( Device < 0 )
  {
    v8 = 196LL;
    goto LABEL_3;
  }
  v11 = v18[0];
  v12 = *((_QWORD *)v10 + 4);
  InputReportByteLength = v18[0]->InputReportByteLength;
  if ( a4 >= InputReportByteLength )
  {
    while ( 1 )
    {
      v18[0] = 0LL;
      v16[0] = 0;
      InputInfoForReport = GazeHidDevice::GetInputInfoForReport(
                             v10,
                             a3,
                             (unsigned __int16)InputReportByteLength,
                             (struct InputInfo **)v18,
                             v16);
      if ( InputInfoForReport < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          210LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)InputInfoForReport);
      if ( v16[0] )
      {
        Device = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(
                   *((_QWORD *)this + 2),
                   v12);
        if ( Device < 0 )
        {
          v8 = 215LL;
          goto LABEL_3;
        }
      }
      if ( v18[0] )
      {
        Device = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
        if ( Device < 0 )
          break;
      }
      v15 = v11->InputReportByteLength;
      a4 -= v15;
      a3 += v15;
      LOWORD(InputReportByteLength) = v11->InputReportByteLength;
      if ( a4 < (unsigned int)v15 )
        return 0LL;
    }
    v8 = 220LL;
    goto LABEL_3;
  }
  return 0LL;
}
