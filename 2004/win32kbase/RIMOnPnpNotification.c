/*
 * XREFs of RIMOnPnpNotification @ 0x1C00A9D80
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C0050460 (NtRIMOnPnpNotification.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01A0FB0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     rimOnPnpRemoveComplete @ 0x1C00166B0 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00ABE00 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00AF520 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C015B674 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016C760 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0177480 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C017770C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  int v27; // eax
  __int64 k; // rdi
  int v29; // eax
  NTSTATUS v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  char v44; // al
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rcx
  struct _KTHREAD *v50; // rcx
  struct _KEVENT *v51; // rcx
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v29 = *(_DWORD *)(i + 184);
        if ( (v29 & 0x2000) == 0 && (v29 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v29 | 8;
          rimOnPnpRemoveComplete((__int64)v3, i, v7, v8);
        }
      }
    }
    RIMLockExclusive((__int64)(v3 + 568));
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v22 = *(_DWORD *)(j + 184);
      if ( (v22 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v22 & 0x80u) == 0 )
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
          v25 = *(_DWORD *)(v17 + 184);
          if ( (v25 & 0x2000) != 0 && (v25 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v17 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
            if ( *((_DWORD *)v3 + 216) )
              v30 = 0;
            else
              v30 = ObOpenObjectByPointer(
                      *(PVOID *)(v17 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v17 + 344));
            if ( v30 < 0 )
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
                  v30);
              }
            }
            else
            {
              rimDoRimDevChange((__int64)v3, v17, 2LL, v16);
              v31 = *(_DWORD *)(v17 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v17 + 184) = v31;
              if ( *((_DWORD *)v3 + 216) )
                v31 |= 0x400000u;
              v32 = v31 | 0x1000000;
              *(_DWORD *)(v17 + 184) = v32;
              if ( (v32 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
            }
          }
        }
        v17 = *(_QWORD *)(v17 + 40);
      }
      while ( v17 );
      v26 = *((_QWORD *)v3 + 53);
      if ( v26 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v27 = *(_DWORD *)(v26 + 184);
            if ( (v27 & 0x2000) != 0 && (v27 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v26 + 184) = v27 & 0xFEFFFFFF;
              RIMLockExclusive((__int64)(v3 + 568));
              if ( (*(_DWORD *)(v26 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
              if ( (*(_DWORD *)(v26 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] && *(_BYTE *)(v26 + 48) <= 1u )
                {
                  if ( (*(_DWORD *)(v26 + 184) & 0x2000) != 0 )
                    RIMTransferInjectionDeviceDataFifoToDataBuffer(v34, v26);
                  v3[584] = 0;
                  v37 = 504;
                  if ( *(_BYTE *)(v26 + 48) != 1 )
                    v37 = 476;
                  rimStackAttachAndProcessInput((_DWORD)v3, v26, v26 + v37, v26 + 256, 0);
                  rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v26);
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
          v26 = *(_QWORD *)(v26 + 40);
        }
        while ( v26 );
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
        v23 = *(_DWORD *)(m + 184);
        if ( (v23 & 0x2000) != 0 && (v23 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange((__int64)v3, m, 3LL, v16);
            v42 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v42;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v42 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v43 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v43 + 88) & ((unsigned __int128)-(__int128)v43 >> 64));
            goto LABEL_15;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 56, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
    }
    for ( n = *((_QWORD *)v3 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      v24 = *(_DWORD *)(n + 184);
      if ( (v24 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v44 = RimDeviceTypeToRimInputType(n, *(unsigned __int8 *)(n + 48));
          WPP_RECORDER_SF_qqSd(v46, v45, v47, v48, ObjectType, (char)v3, n, *(_QWORD *)(n + 216), v44);
          v24 = *(_DWORD *)(n + 184);
        }
        v49 = v24;
        if ( (v24 & 0x20) != 0 && (v24 & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v13, v15, v16);
          v49 = *(unsigned int *)(n + 184);
        }
        if ( (v49 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v13, v15, v16);
        v50 = *(struct _KTHREAD **)(n + 312);
        if ( !v50 || (v3 = (char *)Object, v50 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v13, v15, v16);
        RIMDoOnPnpNotification((__int64)v3, n, v15, v16);
        v51 = *(struct _KEVENT **)(n + 352);
        *(_DWORD *)(n + 184) &= ~0x10u;
        KeSetEvent(v51, 1, 0);
      }
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v3);
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
