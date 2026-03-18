/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C015E170
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0179858 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017C8FC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     rimHidP_SetUsageValue @ 0x1C0165D74 (rimHidP_SetUsageValue.c)
 *     RIMSetContactBoundary @ 0x1C0167018 (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // esi
  int v13; // ebx
  void *v14; // rax
  __int64 v15; // rdi
  int v16; // edx
  int v17; // r9d

  v6 = *(_QWORD *)(a2 + 16);
  v7 = a4;
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( a2 != *(_QWORD *)(v6 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v10 = *(_QWORD *)(v6 + 464);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
    || (v13 = RIMSetContactBoundary(a2, v7 + 128, *(_QWORD *)(a3 + 2596), 0, 0), v13 >= 0) )
  {
    v14 = Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 44LL), 1668313938LL);
    v15 = (__int64)v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v13 = rimHidP_SetUsageValue(0, 1, 0, 48, *(_DWORD *)(a3 + 2596), v11, (__int64)v14, v12);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v13;
      v17 = 41;
    }
    else
    {
      v13 = rimHidP_SetUsageValue(0, 1, 0, 49, *(_DWORD *)(a3 + 2600), v11, v15, v12);
      if ( v13 >= 0 )
      {
        *a5 = v15;
        *a6 = v12;
        return (unsigned int)v13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v13;
      v17 = 40;
    }
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v13);
  }
  return (unsigned int)v13;
}
