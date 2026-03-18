/*
 * XREFs of PiUEventNotifyClient @ 0x14064824C
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x140648658 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140734C88 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140759E74 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075E2CC (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140647754 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140648330 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x140648388 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1406483CC (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x140648408 (PiUEventIsClientStuck.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  _QWORD *PoolWithTag; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PiUEventReferenceEventEntry(a1);
      PoolWithTag[3] = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      if ( v4 < 0 )
      {
        PiUEventDequeuePendingEventWorker(a2, *(void **)(a2 + 112), 0);
        ++*(_DWORD *)(a2 + 136);
        v4 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      }
      if ( v4 < 0 )
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
      else
      {
        PoolWithTag[2] = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
