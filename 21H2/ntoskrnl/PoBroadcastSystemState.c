/*
 * XREFs of PoBroadcastSystemState @ 0x140A4A768
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x14098C2AC (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x14098C45C (PopDirectedDripsSuspendDevices.c)
 *     PopSetDevicesSystemState @ 0x140A49448 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     PopWakeDeviceList @ 0x14038BB00 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14038BCE0 (PopSleepDeviceList.c)
 *     PopMapInternalActionToIrpAction @ 0x14038BF18 (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x140397278 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14039734C (PopFxActivateDevicesForSx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     ExReleaseTimeRefreshLock @ 0x1407D6CBC (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     PopFxNotifySxTransitionState @ 0x1407FF67C (PopFxNotifySxTransitionState.c)
 *     PopDiagTraceDevicesSuspend @ 0x1407FF72C (PopDiagTraceDevicesSuspend.c)
 *     EmPowerPagingEnabled @ 0x1407FF7F4 (EmPowerPagingEnabled.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140808994 (WmiAcquireSmbiosLockExclusive.c)
 *     WmipReleaseSmbiosLockShared @ 0x1408089C4 (WmipReleaseSmbiosLockShared.c)
 *     PopUpdateSmbiosData @ 0x140808AEC (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140808C74 (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x140944824 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14098C1E4 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopSetupSleepNotifies @ 0x140A49130 (PopSetupSleepNotifies.c)
 *     PopDiagTraceDevicesLevel @ 0x140A4ACD0 (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopBootLoaderSiData @ 0x140A52EBC (PopBootLoaderSiData.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 *     MmShutdownSystem @ 0x140A6A3E0 (MmShutdownSystem.c)
 *     MmIsVerifierEnabled @ 0x140A7BDF0 (MmIsVerifierEnabled.c)
 *     BgDisplayFade @ 0x140AAB76C (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r13
  int v17; // r14d
  __int64 v18; // r12
  _DWORD *v19; // r15
  __int64 v20; // r8
  int v22; // r15d
  _DWORD *v23; // r14
  unsigned int i; // esi
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // r9
  __int64 v30; // r10
  char v31; // [rsp+30h] [rbp-30h]
  int v32; // [rsp+34h] [rbp-2Ch] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-28h] BYREF
  ULONG VerifierFlags; // [rsp+40h] [rbp-20h] BYREF
  LARGE_INTEGER *p_Interval; // [rsp+48h] [rbp-18h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]

  v6 = (char *)qword_140C22750;
  v31 = *(_BYTE *)(a1 + 25);
  v4 = v31;
  *(_BYTE *)qword_140C22750 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v31;
  DWORD1(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(PopCurrentBroadcast) = v7;
  if ( v31 )
  {
    v26 = v7 | 0x1100;
  }
  else
  {
    DWORD1(PopCurrentBroadcast) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = DWORD1(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    DWORD1(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 5 )
      goto LABEL_3;
    v26 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8;
  }
  DWORD1(PopCurrentBroadcast) = v26;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  DWORD2(PopCurrentBroadcast) = v9;
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    Interval.QuadPart = *((unsigned int *)v6 + 1);
    BYTE6(Interval.QuadPart) = *(_BYTE *)(a1 + 26);
    BYTE5(Interval.QuadPart) = *(_BYTE *)(a1 + 24);
    p_Interval = &Interval;
    BYTE4(Interval.QuadPart) = v31;
    v36 = 8LL;
    EtwTraceKernelEvent((__int64)&p_Interval, 1u, 0x80008000, 0x1224u, 0x401802u);
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
  v32 = v11;
  if ( v11 )
    DWORD1(PopCurrentBroadcast) |= 0x800000u;
  if ( v31 )
  {
LABEL_38:
    v6[464] = v4;
    if ( !v4 )
      goto LABEL_39;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(1);
  if ( *((int *)v6 + 112) >= 0 )
  {
    PopSetupSleepNotifies((__int64)v6);
    PopDiagTraceDevicesSuspend(
      *(_BYTE *)(a1 + 26) == 3,
      (DWORD1(PopCurrentBroadcast) >> 8) & 0xF,
      WORD2(PopCurrentBroadcast) >> 12);
    v12 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v12 = 14LL;
    PopCheckpointSystemSleep(v12);
    v15 = *(_DWORD *)(a1 + 16);
    if ( v15 == 4 )
    {
      if ( (_BYTE)PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140C227F0 )
        v16 = 4LL;
      else
        v16 = 0LL;
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
        if ( dword_140C227E8 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0);
        VerifierFlags = 0;
        MmIsVerifierEnabled(&VerifierFlags);
        if ( (PopSimulate & 0x80u) != 0 || (VerifierFlags & 2) != 0 )
        {
          v27 = 2LL;
          do
          {
            MmPerformMemoryListCommand(2LL);
            MmPerformMemoryListCommand(3LL);
            MmPerformMemoryListCommand(3LL);
            --v27;
          }
          while ( v27 );
          MmPerformMemoryListCommand(4LL);
          v11 = v32;
        }
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          IoConfigureCrashDump(0LL, 1);
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
        v4 = v31;
        goto LABEL_32;
      }
    }
    v31 = 1;
    v4 = 1;
    if ( !*((_QWORD *)v6 + 57) || *(_DWORD *)(a1 + 12) != 1 )
      goto LABEL_105;
    v28 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
    if ( v28 == 7 )
    {
      v29 = **((_QWORD **)v6 + 7);
    }
    else if ( *(int *)(a1 + 20) < 0 )
    {
LABEL_105:
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
    IoNotifyPowerOperationVetoed(v28, v29, v30);
    goto LABEL_105;
  }
LABEL_37:
  if ( (PopSimulate & 0x20000) == 0 || *(_BYTE *)(a1 + 26) != 2 )
    goto LABEL_38;
  DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
  v31 = 1;
  *((_DWORD *)v6 + 112) = -1073741823;
  v6[464] = 1;
LABEL_51:
  v6[466] = 1;
  *v6 = 2;
  *((_DWORD *)v6 + 1) = 1;
  if ( *(_BYTE *)(a1 + 26) != 2
    || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
        qword_140C22CD8 = KeQueryPerformanceCounter(0LL).QuadPart,
        *v6 == 2) )
  {
    if ( v11 )
      PopFxActivateDevicesForSx(1u);
  }
  v22 = v32;
  v23 = v6 + 64;
  for ( i = 0; (int)i <= 4; ++i )
  {
    if ( PoResumeFromHibernate && !i )
    {
      if ( byte_140C22C00 )
        qword_140C22EA0 = KeQueryPerformanceCounter(0LL).QuadPart;
      if ( byte_140C547E0 )
      {
        BgDisplayFade();
        byte_140C54905 = 0;
        byte_140C54904 = 0;
      }
    }
    LOBYTE(a3) = *v6;
    LOBYTE(a4) = 1;
    PopDiagTraceDevicesLevel(i, 1LL, a3, a4);
    if ( v23[1] < *v23 )
      PopWakeDeviceList(v6, (__int64)&v6[64 * i + 64 + 8 * i]);
    LOBYTE(v25) = *v6;
    PopDiagTraceDevicesLevel(i, 1LL, v25, 0LL);
    if ( i == 1 && *(_BYTE *)(a1 + 26) == 2 && !v22 )
    {
      if ( v6[468] )
      {
        v6[468] = 0;
        ExReleaseTimeRefreshLock();
      }
      if ( PoResumeFromHibernate )
      {
        if ( qword_140C22800 && *(_QWORD *)(qword_140C22800 + 216) )
          PopBootLoaderSiData();
        PopUpdateSmbiosData(
          *(_BYTE *)(*(_QWORD *)(qword_140C22800 + 200) + 1084LL),
          *(_BYTE *)(*(_QWORD *)(qword_140C22800 + 200) + 1085LL),
          *(_DWORD *)(*(_QWORD *)(qword_140C22800 + 200) + 1080LL),
          *(_QWORD *)(*(_QWORD *)(qword_140C22800 + 200) + 1072LL));
      }
      if ( dword_140C227E8 == 5 )
        WmipReleaseSmbiosLockShared();
      EmPowerPagingEnabled(1);
      _InterlockedExchange(&PopPagingEnabled, 1);
      if ( (PopDebugFlags & 4) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
      }
    }
    v23 += 18;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    PopFxIdleDevicesFromSx();
    qword_140C22CE0 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopDiagTraceDevicesWakeEnd();
    PopCheckpointSystemSleep(36LL);
    if ( (PopDebugFlags & 8) != 0 )
    {
      Interval.QuadPart = -50000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
    }
  }
  v4 = v31;
  *v6 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
LABEL_39:
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v32 = *((_DWORD *)v6 + 112);
    v36 = 4LL;
    p_Interval = (LARGE_INTEGER *)&v32;
    EtwTraceKernelEvent((__int64)&p_Interval, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  if ( v4 && *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(0);
  DWORD1(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
