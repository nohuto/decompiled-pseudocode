/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1406B41A0
 * Callers:
 *     PiUEventCopyEventData @ 0x140683588 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x1407532AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14075E8E0 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406AA728 (_CmValidateDeviceInterfaceName.c)
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
