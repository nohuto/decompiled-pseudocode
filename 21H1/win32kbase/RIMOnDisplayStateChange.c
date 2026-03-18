/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C00A37A8
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C00AAB48 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r12
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 j; // rbx
  __int64 result; // rax
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 70, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v17 = 0LL;
  v2 = RIMGetQDCActivePathsData(&v17);
  RIMLockExclusive((__int64)&gObListLock);
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
      v4 = Win32AllocPool(8LL * (unsigned int)v1, 0x6D707352u);
      v1 = 0LL;
      v0 = v4;
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
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v1 )
  {
    v10 = (__int64 *)v0;
    v11 = (unsigned int)v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v12 = *v10;
      v13 = *v10 + 104;
      RIMLockExclusive(v13);
      if ( *(_BYTE *)(v12 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 71, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      else
      {
        v14 = v12 + 568;
        RIMLockExclusive(v12 + 568);
        for ( j = *(_QWORD *)(v12 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1336) )
              rimFindMonitorForDigitizerWithQDCData(j, v2, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1336) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v14 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  if ( v0 )
    Win32FreePool(v0, v7, v9);
  result = RIMFreeQDCActivePathsData(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 72, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  return result;
}
