/*
 * XREFs of PiUEventNotifyClient @ 0x140684C00
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x140684930 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140730258 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14075841C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075BDEC (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140683D44 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140684CE4 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x140684D3C (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140684D80 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x140684DBC (PiUEventIsClientStuck.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
