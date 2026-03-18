/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0023A3C
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000AE90 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000E3A8 (RIMFreeQDCActivePathsData.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx
  unsigned int *v2; // r12
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 j; // rbx
  __int64 result; // rax
  unsigned int v18[10]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 70, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  *(_OWORD *)v18 = 0LL;
  v2 = RIMGetQDCActivePathsData(v18);
  RIMLockExclusive(&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
        LODWORD(v1) = v1 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v1 )
    {
      v4 = Win32AllocPool(8LL * (unsigned int)v1, 1836086098LL);
      v1 = 0LL;
      v0 = (__int64 *)v4;
      if ( v4 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v6 = i - 1;
          if ( !BYTE1(i[4].Flink) && !LOBYTE(v6[5].Flink) )
          {
            *(_QWORD *)(v4 + 8 * v1) = v6;
            v1 = (unsigned int)(v1 + 1);
          }
        }
      }
    }
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v1 )
  {
    v11 = v0;
    v12 = (unsigned int)v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
      v13 = *v11;
      v14 = *v11 + 104;
      RIMLockExclusive(v14);
      if ( *(_BYTE *)(v13 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 71, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      else
      {
        v15 = v13 + 568;
        RIMLockExclusive(v13 + 568);
        for ( j = *(_QWORD *)(v13 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1344) )
              rimFindMonitorForDigitizerWithQDCData(j, v2, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1344) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v15 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v14 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( v0 )
    Win32FreePool(v0);
  result = RIMFreeQDCActivePathsData((__int64)v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 72, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  return result;
}
