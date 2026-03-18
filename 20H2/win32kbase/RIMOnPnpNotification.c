/*
 * XREFs of RIMOnPnpNotification @ 0x1C0026D30
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C0025C30 (NtRIMOnPnpNotification.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00AD910 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC10 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     rimOnPnpRemoveComplete @ 0x1C002443C (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00258A8 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00265B4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C0159114 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A200 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01752DC (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  int v2; // r15d
  char *v3; // rbx
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 j; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 m; // rdi
  __int64 n; // rdi
  int v20; // edx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  int v30; // eax
  __int64 k; // rdi
  int v32; // eax
  NTSTATUS v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  unsigned __int64 v46; // rax
  char v47; // al
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rcx
  struct _KEVENT *v54; // rcx
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
    RIMLockExclusive((char *)Object + 104);
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
      v2 = rimDoScheduledUserModeRimPnpRegistration(v3, v22, v23, v24);
      RIMLockExclusive(v4);
    }
    if ( v3[393] )
    {
      v3[393] = 0;
      if ( *((_DWORD *)v3 + 216) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v32 = *(_DWORD *)(i + 184);
        if ( (v32 & 0x2000) == 0 && (v32 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v32 | 8;
          rimOnPnpRemoveComplete((__int64)v3, i, v7, v8);
        }
      }
    }
    RIMLockExclusive(v3 + 568);
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v25 = *(_DWORD *)(j + 184);
      if ( (v25 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v25 & 0x80u) == 0 )
        RIMStartDeviceSpecificRead((HANDLE *)v3, j, v10, v11);
    }
    *((_QWORD *)v3 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
    v17 = *((_QWORD *)v3 + 53);
    if ( v17 )
    {
      do
      {
        if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
        {
          v28 = *(_DWORD *)(v17 + 184);
          if ( (v28 & 0x2000) != 0 && (v28 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v17 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
            if ( *((_DWORD *)v3 + 216) )
              v33 = 0;
            else
              v33 = ObOpenObjectByPointer(
                      *(PVOID *)(v17 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v17 + 344));
            if ( v33 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v13) = 3;
                WPP_RECORDER_SF_d(
                  (_DWORD)gRimLog,
                  v13,
                  1,
                  55,
                  (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                  v33);
              }
            }
            else
            {
              rimDoRimDevChange((__int64)v3, v17, 2LL, v16);
              v34 = *(_DWORD *)(v17 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v17 + 184) = v34;
              if ( *((_DWORD *)v3 + 216) )
                v34 |= 0x400000u;
              v35 = v34 | 0x1000000;
              *(_DWORD *)(v17 + 184) = v35;
              if ( (v35 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
            }
          }
        }
        v17 = *(_QWORD *)(v17 + 40);
      }
      while ( v17 );
      v29 = *((_QWORD *)v3 + 53);
      if ( v29 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v30 = *(_DWORD *)(v29 + 184);
            if ( (v30 & 0x2000) != 0 && (v30 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v29 + 184) = v30 & 0xFEFFFFFF;
              RIMLockExclusive(v3 + 568);
              if ( (*(_DWORD *)(v29 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
              if ( (*(_DWORD *)(v29 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] && *(_BYTE *)(v29 + 48) <= 1u )
                {
                  if ( (*(_DWORD *)(v29 + 184) & 0x2000) != 0 )
                    RIMTransferInjectionDeviceDataFifoToDataBuffer(v37, v29);
                  v3[584] = 0;
                  v40 = 504;
                  if ( *(_BYTE *)(v29 + 48) != 1 )
                    v40 = 476;
                  rimStackAttachAndProcessInput((_DWORD)v3, v29, v29 + v40, v29 + 256, 0);
                  rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v29);
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
          v29 = *(_QWORD *)(v29 + 40);
        }
        while ( v29 );
        for ( k = *((_QWORD *)v3 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216)) && (*(_DWORD *)(k + 184) & 0x80000) != 0 )
          {
            rimDoRimDevChange((__int64)v3, k, 5LL, v16);
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
        v26 = *(_DWORD *)(m + 184);
        if ( (v26 & 0x2000) != 0 && (v26 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange((__int64)v3, m, 3LL, v16);
            v45 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v45;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v45 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v46 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v46 + 88) & ((unsigned __int128)-(__int128)v46 >> 64));
            goto LABEL_15;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 56, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
    }
    for ( n = *((_QWORD *)v3 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      v27 = *(_DWORD *)(n + 184);
      if ( (v27 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v47 = RimDeviceTypeToRimInputType(n, *(unsigned __int8 *)(n + 48));
          WPP_RECORDER_SF_qqSd(v49, v48, v50, v51, ObjectType, (char)v3, n, *(_QWORD *)(n + 216), v47);
          v27 = *(_DWORD *)(n + 184);
        }
        v52 = v27;
        if ( (v27 & 0x20) != 0 && (v27 & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v13, v15, v16);
          v52 = *(unsigned int *)(n + 184);
        }
        if ( (v52 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v13, v15, v16);
        v53 = *(struct _KTHREAD **)(n + 312);
        if ( !v53 || (v3 = (char *)Object, v53 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v13, v15, v16);
        RIMDoOnPnpNotification((__int64)v3, n, v15, v16);
        v54 = *(struct _KEVENT **)(n + 352);
        *(_DWORD *)(n + 184) &= ~0x10u;
        KeSetEvent(v54, 1, 0);
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
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v20, 1, 59, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v2);
  }
  return (unsigned int)v2;
}
