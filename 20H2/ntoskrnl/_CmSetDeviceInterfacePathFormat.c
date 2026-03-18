/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1406E9420
 * Callers:
 *     PiUEventCopyEventData @ 0x140648498 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x140745174 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x140746504 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140746690 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x14066BCDC (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, WCHAR *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)L"\\\\?\\";
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *(_QWORD *)a2 = v6;
  }
  return result;
}
