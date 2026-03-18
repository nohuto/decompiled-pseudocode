/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x140767A58
 * Callers:
 *     IopDestroyDeviceNode @ 0x14071F594 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140767904 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
}
