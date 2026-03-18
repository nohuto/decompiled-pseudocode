/*
 * XREFs of PnpDeviceEventWorker @ 0x140648C30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoSetActivityIdThread @ 0x140273430 (IoSetActivityIdThread.c)
 *     KeAcquireGuardedMutex @ 0x140273EF0 (KeAcquireGuardedMutex.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PnpProcessCustomDeviceEvent @ 0x1406475B0 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     PnpProcessDeferredRegistrations @ 0x1406495D4 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x1406497B8 (PnpCompleteDeviceEvent.c)
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     PnpEnableWatchdog @ 0x140649940 (PnpEnableWatchdog.c)
 *     PnpProcessTargetDeviceEvent @ 0x14072B270 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _QWORD *v14; // rbx
  PVOID Pa; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  struct _LIST_ENTRY v17; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  Pa = 0LL;
  DestinationString = 0LL;
  PnpDeviceEventThread = (__int64)KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    KeAcquireGuardedMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    BYTE2(NlsMbCodePageTag) = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD **)(PnpDeviceEventList + 120);
    if ( v5 == (_QWORD *)(PnpDeviceEventList + 120) )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = v5;
    *v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    Pa = v5;
    v7 = *(_QWORD *)&NullGuid.Data1 - v5[11];
    if ( *(_QWORD *)&NullGuid.Data1 == v5[11] )
      v7 = *(_QWORD *)NullGuid.Data4 - v5[12];
    if ( v7 )
    {
      v17 = *(struct _LIST_ENTRY *)(v5 + 11);
      IoSetActivityIdThread(&v17);
      v2 = 1;
    }
    v8 = v5[19];
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)PnpDeviceActionThread, 0LL, 0LL) )
    {
      v9 = -1073741431;
    }
    if ( v9 < 0 )
      goto LABEL_25;
    v5[13] = PnpEnableWatchdog(1LL, v5);
    v10 = *((_DWORD *)v5 + 32);
    if ( v10 > 4 )
    {
      if ( v10 < 6 )
        goto LABEL_40;
      if ( v10 > 8 )
      {
        if ( v10 != 11 && v10 != 9 && v10 != 10 )
        {
LABEL_40:
          v9 = -1073741823;
          goto LABEL_25;
        }
        v13 = PiUEventNotifyUserMode((__int64)v5);
LABEL_24:
        v9 = v13;
      }
LABEL_25:
      if ( v9 == 259 )
        goto LABEL_29;
      goto LABEL_26;
    }
    if ( v10 != 4 )
    {
      if ( !v10 )
      {
        v9 = PiUEventNotifyUserMode((__int64)v5);
        if ( v9 >= 0 )
          PnpNotifyHwProfileChange(v5 + 14);
        goto LABEL_25;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v13 = PnpProcessTargetDeviceEvent(&Pa);
        goto LABEL_24;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_40;
        v13 = PnpProcessCustomDeviceEvent((__int64 *)&Pa);
        goto LABEL_24;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 88);
      PnpNotifyDeviceClassChange(v5 + 14, v5 + 20, &DestinationString);
    }
    PiUEventNotifyUserMode((__int64)v5);
LABEL_26:
    v14 = Pa;
    if ( *((_QWORD *)Pa + 13) )
    {
      PnpDisableWatchdog();
      v14[13] = 0LL;
    }
    PnpCompleteDeviceEvent(Pa);
LABEL_29:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  KeAcquireGuardedMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  BYTE2(NlsMbCodePageTag) = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
