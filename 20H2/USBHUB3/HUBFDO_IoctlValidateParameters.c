/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x1C00749E4
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000D1D4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
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
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBFDO_IoctlValidateParameters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // r10d
  unsigned __int16 v7; // r9

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    return (unsigned int)-1073741823;
  if ( a3 < a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 34;
LABEL_15:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v7, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  if ( a6 >= a5 )
  {
    if ( a2 >= 4 && (!*a4 || *a4 > (unsigned int)*(unsigned __int16 *)(a1 + 48)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 36;
        goto LABEL_15;
      }
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x23u, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
    return (unsigned int)-1073741789;
  }
  return v6;
}
