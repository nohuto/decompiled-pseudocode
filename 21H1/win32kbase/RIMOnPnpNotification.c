/*
 * XREFs of RIMOnPnpNotification @ 0x1C00A0F20
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C003FE40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C009EA60 (NtRIMOnPnpNotification.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D10 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     rimOnPnpRemoveComplete @ 0x1C005A1C4 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C009E3A0 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C009F4EC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C01619C4 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C0172AB0 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  int v2; // r15d
  char *v3; // rbx
  char *v4; // r14
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 j; // rdi
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 m; // rdi
  __int64 n; // rdi
  int v13; // edx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 k; // rdi
  int v22; // eax
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rax
  char v31; // al
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rcx
  struct _KEVENT *v38; // rcx
  int ObjectType; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 54, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v3 = (char *)Object;
    v4 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 58, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v3, 0LL, 0LL);
    }
    if ( v3[392] )
    {
      v3[392] = 0;
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      v2 = rimDoScheduledUserModeRimPnpRegistration(v3);
      RIMLockExclusive((__int64)v4);
    }
    if ( v3[393] )
    {
      v3[393] = 0;
      if ( *((_DWORD *)v3 + 216) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v22 = *(_DWORD *)(i + 184);
        if ( (v22 & 0x2000) == 0 && (v22 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v22 | 8;
          rimOnPnpRemoveComplete((__int64)v3, i);
        }
      }
    }
    RIMLockExclusive((__int64)(v3 + 568));
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v15 = *(_DWORD *)(j + 184);
      if ( (v15 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v15 & 0x80u) == 0 )
        RIMStartDeviceSpecificRead((HANDLE *)v3, j);
    }
    *((_QWORD *)v3 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
    v10 = *((_QWORD *)v3 + 53);
    if ( v10 )
    {
      do
      {
        if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
        {
          v18 = *(_DWORD *)(v10 + 184);
          if ( (v18 & 0x2000) != 0 && (v18 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v10 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
            if ( *((_DWORD *)v3 + 216) )
              v23 = 0;
            else
              v23 = ObOpenObjectByPointer(
                      *(PVOID *)(v10 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v10 + 344));
            if ( v23 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v8) = 3;
                WPP_RECORDER_SF_d(
                  (_DWORD)gRimLog,
                  v8,
                  1,
                  55,
                  (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                  v23);
              }
            }
            else
            {
              rimDoRimDevChange(v3, v10, 2LL);
              v24 = *(_DWORD *)(v10 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v10 + 184) = v24;
              if ( *((_DWORD *)v3 + 216) )
                v24 |= 0x400000u;
              v25 = v24 | 0x1000000;
              *(_DWORD *)(v10 + 184) = v25;
              if ( (v25 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
            }
          }
        }
        v10 = *(_QWORD *)(v10 + 40);
      }
      while ( v10 );
      v19 = *((_QWORD *)v3 + 53);
      if ( v19 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v20 = *(_DWORD *)(v19 + 184);
            if ( (v20 & 0x2000) != 0 && (v20 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v19 + 184) = v20 & 0xFEFFFFFF;
              RIMLockExclusive((__int64)(v3 + 568));
              if ( (*(_DWORD *)(v19 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              if ( (*(_DWORD *)(v19 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] && *(_BYTE *)(v19 + 48) <= 1u )
                {
                  if ( (*(_DWORD *)(v19 + 184) & 0x2000) != 0 )
                    RIMTransferInjectionDeviceDataFifoToDataBuffer(v26, v19);
                  v3[584] = 0;
                  v27 = 504;
                  if ( *(_BYTE *)(v19 + 48) != 1 )
                    v27 = 476;
                  rimStackAttachAndProcessInput((_DWORD)v3, v19, v19 + v27, v19 + 256, 0);
                  rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v19);
                }
              }
              else
              {
                rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v3);
              }
              *((_QWORD *)v3 + 72) = 0LL;
              ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          v19 = *(_QWORD *)(v19 + 40);
        }
        while ( v19 );
        for ( k = *((_QWORD *)v3 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216)) && (*(_DWORD *)(k + 184) & 0x80000) != 0 )
          {
            rimDoRimDevChange(v3, k, 5LL);
            *(_DWORD *)(k + 184) &= ~0x80000u;
          }
        }
      }
    }
LABEL_15:
    for ( m = *((_QWORD *)v3 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
      {
        v16 = *(_DWORD *)(m + 184);
        if ( (v16 & 0x2000) != 0 && (v16 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange(v3, m, 3LL);
            v29 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v29;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v29 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v30 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v30 + 88) & ((unsigned __int128)-(__int128)v30 >> 64));
            goto LABEL_15;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 56, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
    }
    for ( n = *((_QWORD *)v3 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      v17 = *(_DWORD *)(n + 184);
      if ( (v17 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = RimDeviceTypeToRimInputType(n, *(unsigned __int8 *)(n + 48));
          WPP_RECORDER_SF_qqSd(v33, v32, v34, v35, ObjectType, (char)v3, n, *(_QWORD *)(n + 216), v31);
          v17 = *(_DWORD *)(n + 184);
        }
        v36 = v17;
        if ( (v17 & 0x20) != 0 && (v17 & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
          v36 = *(unsigned int *)(n + 184);
        }
        if ( (v36 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
        v37 = *(struct _KTHREAD **)(n + 312);
        if ( !v37 || (v3 = (char *)Object, v37 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        RIMDoOnPnpNotification((__int64)v3, n);
        v38 = *(struct _KEVENT **)(n + 352);
        *(_DWORD *)(n + 184) &= ~0x10u;
        KeSetEvent(v38, 1, 0);
      }
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v13, 1, 59, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v2);
  }
  return (unsigned int)v2;
}
