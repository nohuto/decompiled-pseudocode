/*
 * XREFs of ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800A84FC
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A11C8 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800A5F2C (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A6D0C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800A7E2C (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SetAutonomousMode(HidLampArrayDevice *this, char a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == *((_BYTE *)this + 636) )
    return 0LL;
  *((_BYTE *)this + 636) = a2;
  v8 = a2;
  v4 = HidLampArrayDevice::SendLampArrayControlReport(this, (const struct LampArrayControlDeviceReport *)&v8, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E0,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
