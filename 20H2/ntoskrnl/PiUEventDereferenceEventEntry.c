/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x140648D9C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140648C00 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140648D44 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PiUEventFreeEventEntry @ 0x140648E00 (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 68) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
