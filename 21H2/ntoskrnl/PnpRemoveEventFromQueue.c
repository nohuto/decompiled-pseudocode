/*
 * XREFs of PnpRemoveEventFromQueue @ 0x1408ABF0C
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F5B4 (PnpQueueQueryAndRemoveEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveEventFromQueue(PVOID P)
{
  unsigned int v2; // edi
  PVOID *v3; // rax
  PVOID *v4; // rcx

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  v3 = *(PVOID **)P;
  if ( *(PVOID *)P != P )
  {
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(P, 0x4B706E50u);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  return v2;
}
