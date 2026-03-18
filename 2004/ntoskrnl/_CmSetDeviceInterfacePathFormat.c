/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1406BEAE0
 * Callers:
 *     PiUEventCopyEventData @ 0x140646EA8 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x140735CE8 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x140737074 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140737200 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1405E09CC (_CmValidateDeviceInterfaceName.c)
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
