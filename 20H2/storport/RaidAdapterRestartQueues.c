/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C001362C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B5C0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C002E4E0 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F7CC (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0030740 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C00325F0 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032B38 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortAdapterActiveCondition @ 0x1C0040010 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000AFC0 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000B0B0 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C003490C (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004D998 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C004DC94 (RaFreeIoResource.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx
  __int64 v6; // rdx
  PSLIST_ENTRY IoResource; // rsi
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int128 v20; // [rsp+60h] [rbp-10h]

  v1 = a1 + 832;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v3 = 0LL;
    v4 = 0;
    memset(&v17, 0, sizeof(v17));
    if ( *(int *)(v1 + 280) > 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1, &v17);
      v4 = 1;
    }
    if ( *(_DWORD *)(v1 + 24) )
    {
      if ( *(_DWORD *)(v1 + 40) != 1 && *(int *)(v1 + 44) <= 0 )
      {
        IoResource = RaAllocateIoResource((PSLIST_HEADER)(v1 + 64));
        if ( IoResource )
          break;
        if ( *(_DWORD *)(v1 + 136) < *(_DWORD *)(v1 + 144) )
        {
          RaAttemptHighWaterMarkIncrease(v1);
          IoResource = RaAllocateIoResource((PSLIST_HEADER)(v1 + 64));
          if ( IoResource )
            break;
        }
      }
    }
    if ( !v4 )
      goto LABEL_6;
    KeReleaseInStackQueuedSpinLock(&v17);
LABEL_31:
    if ( !v3 )
      goto LABEL_6;
    v16 = *(_QWORD *)(v3[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(v16 + 648))(*(_QWORD *)(v16 + 640), v3 - 15, &v19);
  }
  if ( !v4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1, &v17);
  if ( *(_DWORD *)(v1 + 24) && *(int *)(v1 + 40) <= 0 && *(int *)(v1 + 44) <= 0 )
  {
    v9 = (_QWORD *)(v1 + 8);
    v3 = *(__int64 **)(v1 + 8);
    if ( v3[1] != v1 + 8 || (v10 = *v3, *(__int64 **)(*v3 + 8) != v3) )
LABEL_33:
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 192));
    v11 = *(_DWORD *)(v1 + 192);
    if ( v11 <= *(_DWORD *)(v1 + 36) )
      v11 = *(_DWORD *)(v1 + 36);
    --*(_DWORD *)(v1 + 24);
    *(_DWORD *)(v1 + 36) = v11;
    if ( (*((_BYTE *)v3 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v3, v6, v8);
      v13 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry )
        goto LABEL_33;
      v14 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v14 != QosEntryForDeviceEntry )
        goto LABEL_33;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v17);
  if ( v3 )
  {
    *((_QWORD *)&v20 + 1) = IoResource + 52;
    *(_QWORD *)&v20 = IoResource + 2;
    *((_QWORD *)&v19 + 1) = IoResource + 68;
    RaidZeroXrb(
      (__int64)&IoResource[2],
      v15,
      *((_DWORD *)&IoResource[48].Next + 2),
      *((void **)&IoResource[49].Next + 1));
    goto LABEL_31;
  }
  RaFreeIoResource(v1 + 64, IoResource);
LABEL_6:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 136); i != (_QWORD *)(a1 + 136); i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 7));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
