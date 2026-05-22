/*
 * XREFs of ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800A4420
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800A0100 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A0944 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

bool __fastcall ConsumerControlGenericDevice::ContainsDevice(ConsumerControlGenericDevice *this, HSTRING *a2)
{
  bool v4; // di
  int InterfacePath; // eax
  HSTRING v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  INT32 result; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string2; // [rsp+48h] [rbp+20h] BYREF

  WindowsDeleteString(0LL);
  v4 = 0;
  string2 = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath(a2, &string2);
  if ( InterfacePath < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
LABEL_3:
    v4 = 1;
    goto LABEL_10;
  }
  v6 = (HSTRING)*((_QWORD *)this + 3);
  if ( !v6 )
  {
    v4 = string2 == 0LL;
    goto LABEL_10;
  }
  if ( string2 && WindowsCompareStringOrdinal(v6, string2, &result) >= 0 && !result )
    goto LABEL_3;
LABEL_10:
  WindowsDeleteString(string2);
  return v4;
}
