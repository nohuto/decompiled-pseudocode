/*
 * XREFs of PiUEventHandleUnregisterClient @ 0x1406B8780
 * Callers:
 *     PiUEventHandleIoctl @ 0x1406B8F3C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventHandleUnregisterClient(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  struct _FAST_MUTEX *v3; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  if ( v1 )
  {
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v1 + 16));
    v3 = *(struct _FAST_MUTEX **)(v1 + 16);
    *(_BYTE *)(v1 + 140) = 0;
    KeReleaseGuardedMutex(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
