/*
 * XREFs of PiUEventReferenceEventEntry @ 0x1406483CC
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x14064824C (PiUEventNotifyClient.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  unsigned int v3; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  KeReleaseGuardedMutex(v2);
  return v3;
}
