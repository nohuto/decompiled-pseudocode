/*
 * XREFs of IopReleaseResources @ 0x14074C80C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PipClearDevNodeFlags @ 0x1407359D4 (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x14074A3D4 (PnpReleaseResourcesInternal.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B0E60 (IopAllocateBootResourcesInternal.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx

  PnpReleaseResourcesInternal((_QWORD *)a1);
  ExAcquireFastMutex(&PiResourceListLock);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  KeReleaseGuardedMutex(&PiResourceListLock);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 && *(_QWORD *)(a1 + 544) )
      IopAllocateBootResourcesInternal(4LL, *(_QWORD *)(a1 + 32));
  }
  else
  {
    PipClearDevNodeFlags(a1, 192);
    v5 = *(void **)(a1 + 544);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
