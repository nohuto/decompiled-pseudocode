/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x140683D9C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140683C00 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140683D44 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PiUEventFreeEventEntry @ 0x140683E00 (PiUEventFreeEventEntry.c)
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
