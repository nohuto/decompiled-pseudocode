/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x14078AE7C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14078ACE0 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14078AE24 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x14078AEE0 (PiUEventFreeEventEntry.c)
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
