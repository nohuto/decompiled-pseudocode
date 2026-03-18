/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1406477AC
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140647610 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140647754 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x140647810 (PiUEventFreeEventEntry.c)
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
