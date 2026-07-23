/*
 * XREFs of PiUEventNotifyUserMode @ 0x140647C2C
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1406475B0 (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x14072B270 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140730A20 (PnpNotifyUserModeDeviceRemoval.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PiUEventShouldQueueEvent @ 0x1402734B4 (PiUEventShouldQueueEvent.c)
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PiUEventDereferenceEventEntry @ 0x1406477AC (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x140647810 (PiUEventFreeEventEntry.c)
 *     PiUEventCacheObjectProperties @ 0x140647F6C (PiUEventCacheObjectProperties.c)
 *     PiUEventReferenceEventEntry @ 0x1406483CC (PiUEventReferenceEventEntry.c)
 *     PiUEventIsDeviceEventVetoable @ 0x1406488E0 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventDeviceNeedsInstall @ 0x140759650 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14089FBDC (PiUEventSendDeviceInstallNotification.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // r15
  char IsDeviceEventVetoable; // al
  char v5; // r14
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  struct _FAST_MUTEX *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  PVOID *v12; // r12
  struct _WORK_QUEUE_ITEM *v13; // rax
  __int64 v15; // rbx
  struct _KEVENT *v16; // rax
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v23 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 128) == 4 )
  {
    v15 = a1 + 160;
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 160, &v23) >= 0 )
    {
      if ( v23 )
        PiUEventSendDeviceInstallNotification(v15);
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable();
    LODWORD(Size) = *(_DWORD *)(a1 + 148) + 72;
    v5 = IsDeviceEventVetoable;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x59706E50u);
    v7 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v8 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    *(_QWORD *)(v7 + 16) = v8;
    if ( !v8 )
    {
LABEL_38:
      PiUEventFreeEventEntry((_QWORD *)v7);
      return (unsigned int)-1073741670;
    }
    KeInitializeGuardedMutex(v8);
    *(_DWORD *)(v7 + 56) = 1;
    *(_BYTE *)(v7 + 69) = v5;
    v9 = *(_DWORD **)(a1 + 48);
    if ( v5 )
    {
      *(_QWORD *)(v7 + 32) = v9;
      v19 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v7 + 40) = v19;
      **(_WORD **)(v19 + 8) = 0;
      **(_WORD **)(v7 + 40) = 0;
      **(_DWORD **)(v7 + 32) = 0;
    }
    else
    {
      if ( v9 )
        *v9 = 0;
      v10 = *(_QWORD *)(a1 + 56);
      if ( v10 )
      {
        **(_WORD **)(v10 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || v5 )
    {
      v3 = 1;
      v16 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
      *(_QWORD *)(v7 + 24) = v16;
      if ( !v16 )
      {
LABEL_36:
        if ( *(_QWORD *)(v7 + 24) )
          PiUEventDereferenceEventEntry((PVOID)v7);
        goto LABEL_38;
      }
      KeInitializeEvent(v16, NotificationEvent, 0);
      PiUEventReferenceEventEntry(v7);
    }
    *(_BYTE *)(v7 + 68) = v3;
    *(_DWORD *)(v7 + 64) = *(_DWORD *)(a1 + 148) + 8;
    memmove((void *)(v7 + 72), (const void *)(a1 + 112), *(unsigned int *)(a1 + 148));
    PiUEventCacheObjectProperties(v7);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v11 = (__int64 *)qword_140C45088;
    v12 = (PVOID *)PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140C45088 != &PiUEventUsermodeEventQueue )
      goto LABEL_42;
    *(_QWORD *)v7 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(v7 + 8) = v11;
    *v11 = v7;
    qword_140C45088 = v7;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( v12 != &PiUEventUsermodeEventQueue )
      goto LABEL_17;
    v13 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
    if ( v13 )
    {
      v13->Parameter = v13;
      v13->WorkerRoutine = PiUEventProcessEventWorker;
      v13->List.Flink = 0LL;
      ExQueueWorkItem(v13, NormalWorkQueue);
LABEL_17:
      if ( v3 )
      {
        Object[0] = &PnpShutdownEvent;
        Object[1] = *(PVOID *)(v7 + 24);
        Timeout.QuadPart = -300000000LL;
        v17 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
        LODWORD(Size) = 0;
        v18 = v17;
        ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            if ( v5 && **(_DWORD **)(a1 + 48) )
              v2 = -1073741536;
            else
              v2 = 0;
          }
          else
          {
            v2 = v18 != 258 ? 0xC0000001 : 0;
          }
        }
        else
        {
          v2 = -1073741431;
        }
        ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
        *(_QWORD *)(v7 + 32) = 0LL;
        *(_QWORD *)(v7 + 40) = 0LL;
        KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        PiUEventDereferenceEventEntry((PVOID)v7);
      }
      return v2;
    }
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v20 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v21 = *(_QWORD **)(v7 + 8), *v21 != v7) )
LABEL_42:
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( !v3 )
      goto LABEL_38;
    goto LABEL_36;
  }
  return v2;
}
