/*
 * XREFs of HUBFDO_EvtIoDeviceControl @ 0x1C0077390
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000D1D4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0074AC8 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0074CA8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0074E94 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C007520C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C007544C (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0075628 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007585C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0075C74 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0076240 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00764F8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C00768D8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C0076D30 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C00771FC (HUBFDO_IoctlResetHub.c)
 */

_UNKNOWN **__fastcall HUBFDO_EvtIoDeviceControl(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  _DWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  if ( a5 > 0x220440 )
  {
    switch ( a5 )
    {
      case 0x220444u:
        return (_UNKNOWN **)HUBFDO_IoctlCyclePort(a1, a2, a3, a4);
      case 0x220448u:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 1);
      case 0x22044Cu:
        return (_UNKNOWN **)HUBFDO_IoctlResetHub(a1, a2);
      case 0x220450u:
        return (_UNKNOWN **)HUBFDO_IoctlGetHubCapsEx(a1, a2, a3, a4);
      case 0x220454u:
        return (_UNKNOWN **)HUBFDO_IoctlGetHubInformationEx(a1, a2, a3, a4);
      case 0x220458u:
        return (_UNKNOWN **)HUBFDO_IoctlGetPortConnectorProperties(a1, a2, a3, a4);
      case 0x22045Cu:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionInformationExV2(a1, a2, a3, a4);
    }
  }
  else
  {
    switch ( a5 )
    {
      case 0x220440u:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionAttributes(a1, a2, a3, a4);
      case 0x220010u:
        return HUBFDO_IoctlGetPortStatus(a1, a2, a3, a4);
      case 0x220408u:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeInformation(a1, a2, a3, a4);
      case 0x22040Cu:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 0);
      case 0x220410u:
        return (_UNKNOWN **)HUBFDO_IoctlGetDescriptorFromNodeConnection(a1, a2, a3, a4);
      case 0x220414u:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionName(a1, a2, a3, a4);
      case 0x220420u:
        return (_UNKNOWN **)HUBFDO_IoctlGetNodeConnectionDriverKeyName(a1, a2, a3, a4);
      case 0x22043Cu:
        return (_UNKNOWN **)HUBFDO_IoctlGetHubCaps(a1, a2, a3, a4);
    }
  }
  v11 = 0LL;
  v10[0] = 16;
  v10[1] = 8;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v7);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 2024))(
                          WdfDriverGlobals,
                          a2,
                          v8,
                          v10);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                          WdfDriverGlobals,
                          a2,
                          v9);
  }
  return result;
}
