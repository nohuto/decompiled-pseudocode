/*
 * XREFs of ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1800BB514
 * Callers:
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800BB260 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180094F74 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetRawEdidIdentificationBlock(
        DisplayEdidHelpers *this,
        struct _LUID a2,
        __int64 a3,
        struct EdidIdentificationBlock *a4)
{
  DWORD LowPart; // edi
  unsigned int DeviceInfo; // eax
  __int16 v9; // ax
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+20h] [rbp-248h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-234h] BYREF
  __int64 v12; // [rsp+40h] [rbp-228h]
  __int16 v13; // [rsp+48h] [rbp-220h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  LowPart = a2.LowPart;
  memset_0(v11, 0, 0x204uLL);
  requestPacket.type = -8;
  requestPacket.size = 536;
  requestPacket.adapterId = (LUID)this;
  requestPacket.id = LowPart;
  DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
  if ( DeviceInfo )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             32LL,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DeviceInfo);
  if ( v11[0] >= 0x12 )
  {
    v9 = v13;
    *(_QWORD *)a3 = v12;
    *(_WORD *)(a3 + 8) = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
