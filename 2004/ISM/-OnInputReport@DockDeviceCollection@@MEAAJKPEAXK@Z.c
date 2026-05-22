/*
 * XREFs of ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CB3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z @ 0x18009DDD4 (-GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z.c)
 */

__int64 __fastcall DockDeviceCollection::OnInputReport(DockDeviceCollection *this, int a2, char *a3, unsigned int a4)
{
  int Device; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _HIDP_CAPS *v11; // rsi
  unsigned int InputReportByteLength; // ebx
  int InputInfoForReport; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  struct RIMDevice *v16; // [rsp+30h] [rbp-88h] BYREF
  struct _HIDP_CAPS *v17; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[80]; // [rsp+40h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v16 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v16, 0LL);
  if ( Device < 0 )
  {
    v9 = 148LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v17 = (struct _HIDP_CAPS *)(v8 & (unsigned __int64)v17);
  Device = HIDDevice::GetHIDCapabilities(v16, &v17);
  if ( Device < 0 )
  {
    v9 = 151LL;
    goto LABEL_3;
  }
  v11 = v17;
  InputReportByteLength = v17->InputReportByteLength;
  if ( a4 >= InputReportByteLength )
  {
    while ( 1 )
    {
      memset_0(v18, 0, sizeof(v18));
      InputInfoForReport = DockDevice::GetInputInfoForReport(
                             v16,
                             a3,
                             InputReportByteLength,
                             (struct DockInputInfo *)v18);
      if ( InputInfoForReport < 0 )
        break;
      InputInfoForReport = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v18);
      if ( InputInfoForReport < 0 )
      {
        v14 = 163LL;
        goto LABEL_11;
      }
LABEL_12:
      v15 = v11->InputReportByteLength;
      a4 -= v15;
      a3 += v15;
      LOWORD(InputReportByteLength) = v11->InputReportByteLength;
      if ( a4 < (unsigned __int16)InputReportByteLength )
        return 0LL;
    }
    v14 = 161LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)InputInfoForReport);
    goto LABEL_12;
  }
  return 0LL;
}
