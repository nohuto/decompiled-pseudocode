/*
 * XREFs of PoBroadcastSystemState @ 0x1409932E0
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408E39E0 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E3BD8 (PopDirectedDripsSuspendDevices.c)
 *     PopSetDevicesSystemState @ 0x140991BF4 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1409AF140 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PopWakeDeviceList @ 0x140383184 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140383364 (PopSleepDeviceList.c)
 *     PopMapInternalActionToIrpAction @ 0x14038359C (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x14038C384 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14038C458 (PopFxActivateDevicesForSx.c)
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x140776B88 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x140776C1C (PopDiagTraceDevicesSuspend.c)
 *     PopFxNotifySxTransitionState @ 0x140776CE4 (PopFxNotifySxTransitionState.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14077A54C (WmiAcquireSmbiosLockExclusive.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x14077A57C (WmiReleaseSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x14077A610 (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14077A7BC (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x14089FBC0 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1408DC5F0 (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408E3870 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopDiagTraceDevicesLevel @ 0x14099382C (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 *     PopSetupSleepNotifies @ 0x140995A70 (PopSetupSleepNotifies.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PopBootLoaderSiData @ 0x140999F34 (PopBootLoaderSiData.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x14099A1A0 (PopVerifierFlushMemoryBeforeSleep.c)
 *     MmShutdownSystem @ 0x1409B10B0 (MmShutdownSystem.c)
 *     BgDisplayFade @ 0x1409F261C (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // r13d
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r12
  int v17; // esi
  __int64 v18; // r15
  _DWORD *v19; // r14
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // esi
  _DWORD *v26; // r14
  __int64 v27; // r8
  int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r10
  char v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  int v34; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-20h] BYREF

  v6 = (char *)qword_140C23A50;
  v32 = *(_BYTE *)(a1 + 25);
  v4 = v32;
  *(_BYTE *)qword_140C23A50 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v32;
  DWORD1(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(PopCurrentBroadcast) = v7;
  if ( v32 )
  {
    v28 = v7 | 0x1100;
  }
  else
  {
    DWORD1(PopCurrentBroadcast) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = DWORD1(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    DWORD1(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 5 )
      goto LABEL_3;
    v28 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8;
  }
  DWORD1(PopCurrentBroadcast) = v28;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  DWORD2(PopCurrentBroadcast) = v9;
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v33 = *((unsigned int *)v6 + 1);
    BYTE6(v33) = *(_BYTE *)(a1 + 26);
    BYTE5(v33) = *(_BYTE *)(a1 + 24);
    v36[0] = &v33;
    BYTE4(v33) = v32;
    v36[1] = 8LL;
    EtwTraceKernelEvent((int)v36, 1, 0x80008000, 4644, 4200450);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  v10 = *(_DWORD *)(a1 + 20);
  if ( (v10 & 0x8000000) != 0 )
  {
    DWORD1(PopCurrentBroadcast) |= 0x200000u;
    v10 = *(_DWORD *)(a1 + 20);
  }
  v11 = v10 & 0x4000000;
  if ( v11 )
    DWORD1(PopCurrentBroadcast) |= 0x800000u;
  if ( !v32 )
  {
    if ( *(_BYTE *)(a1 + 26) == 2 )
      PopFxNotifySxTransitionState(1);
    if ( *((int *)v6 + 112) < 0 )
    {
LABEL_37:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        v32 = 1;
        *((_DWORD *)v6 + 112) = -1073741823;
      }
      goto LABEL_38;
    }
    PopSetupSleepNotifies(v6);
    PopDiagTraceDevicesSuspend(
      *(_BYTE *)(a1 + 26) == 3,
      (DWORD1(PopCurrentBroadcast) >> 8) & 0xF,
      WORD2(PopCurrentBroadcast) >> 12);
    v12 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v12 = 14LL;
    PopCheckpointSystemSleep(v12);
    v15 = *(_DWORD *)(a1 + 16);
    if ( v15 == 4 && (PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140C23A90) )
    {
      v16 = 4LL;
    }
    else
    {
      v16 = 0LL;
      if ( (unsigned int)(v15 - 2) <= 1 && *v6 == 2 )
        PopFxActivateDevicesForSx(1u);
    }
    v17 = 4;
    v18 = 4LL;
    v19 = v6 + 352;
    while ( 1 )
    {
      if ( v17 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v11 )
      {
        if ( dword_140C23A88 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0);
        PopVerifierFlushMemoryBeforeSleep();
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          LOBYTE(v22) = 1;
          IoConfigureCrashDump(0LL, v22, v23, v24);
          if ( (PopShutdownCleanly & 0x10) != 0 )
            ObShutdownSystem(1);
          MmShutdownSystem(1LL);
        }
        else
        {
          ExAcquireTimeRefreshLock(1u);
          v6[468] = 1;
        }
      }
      LOBYTE(v13) = *v6;
      LOBYTE(v14) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v17, 0LL, v13, v14);
      if ( *v19 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList((__int64)v6, (__int64)&v6[64 * v17 + 64 + 8 * v17]);
      }
      LOBYTE(v20) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v17, 0LL, v20, 0LL);
      if ( *((int *)v6 + 112) < 0 )
        break;
      --v17;
      --v18;
      v19 -= 18;
      if ( v18 < v16 )
      {
        v4 = v32;
        goto LABEL_32;
      }
    }
    v32 = 1;
    v4 = 1;
    if ( *((_QWORD *)v6 + 57) && *(_DWORD *)(a1 + 12) == 1 )
    {
      v29 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v29 == 7 )
      {
        v30 = **((_QWORD **)v6 + 7);
LABEL_98:
        IoNotifyPowerOperationVetoed(v29, v30, v31);
        goto LABEL_99;
      }
      if ( *(int *)(a1 + 20) >= 0 )
        goto LABEL_98;
    }
LABEL_99:
    if ( v11 )
      PopDirectedDripsNotifyTransitionFailed(*((_QWORD *)v6 + 57));
LABEL_32:
    if ( *v6 == 2 && v11 )
      PopFxIdleDevicesFromSx();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12LL);
    goto LABEL_37;
  }
LABEL_38:
  v6[464] = v4;
  if ( v4 )
  {
    v6[466] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) != 2
      || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
          qword_140C23F78 = KeQueryPerformanceCounter(0LL).QuadPart,
          *v6 == 2) )
    {
      if ( v11 )
        PopFxActivateDevicesForSx(1u);
    }
    v25 = 0;
    v26 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v25 )
      {
        if ( byte_140C23EA0 )
          qword_140C24140 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_140C50690 )
        {
          BgDisplayFade();
          byte_140C50785 = 0;
          byte_140C50784 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v25, 1LL, a3, a4);
      if ( v26[1] < *v26 )
        PopWakeDeviceList(v6, (__int64)&v6[64 * v25 + 64 + 8 * v25]);
      LOBYTE(v27) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v25, 1LL, v27, 0LL);
      if ( v25 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v11 )
      {
        if ( v6[468] )
        {
          v6[468] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( qword_140C23AA0 && *(_QWORD *)(qword_140C23AA0 + 216) )
            PopBootLoaderSiData();
          PopUpdateSmbiosData(
            *(_BYTE *)(*(_QWORD *)(qword_140C23AA0 + 200) + 980LL),
            *(_BYTE *)(*(_QWORD *)(qword_140C23AA0 + 200) + 981LL),
            *(_DWORD *)(*(_QWORD *)(qword_140C23AA0 + 200) + 976LL),
            *(_QWORD *)(*(_QWORD *)(qword_140C23AA0 + 200) + 968LL));
        }
        if ( dword_140C23A88 == 5 )
          WmiReleaseSmbiosLockExclusive();
        EmPowerPagingEnabled(1);
        _InterlockedExchange(&PopPagingEnabled, 1);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v25;
      v26 += 18;
    }
    while ( v25 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_140C23F80 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36LL);
      PopHandleWakeSources();
      if ( (PopDebugFlags & 8) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
      }
    }
    v4 = v32;
    *v6 = *(_BYTE *)(a1 + 26);
    *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  }
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v34 = *((_DWORD *)v6 + 112);
    v37[1] = 4LL;
    v37[0] = &v34;
    EtwTraceKernelEvent((int)v37, 1, 0x80008000, 4645, 4200450);
  }
  if ( v4 && *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(0);
  DWORD1(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
