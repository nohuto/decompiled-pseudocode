/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x140757198
 * Callers:
 *     IopDestroyDeviceNode @ 0x140710204 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140757044 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
