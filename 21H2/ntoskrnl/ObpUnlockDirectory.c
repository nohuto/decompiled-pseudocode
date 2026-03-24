/*
 * XREFs of ObpUnlockDirectory @ 0x14027EB0C
 * Callers:
 *     ObpReleaseLookupContext @ 0x14027EAD0 (ObpReleaseLookupContext.c)
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x140601F48 (ObpLookupDirectoryUsingHash.c)
 *     NtQueryDirectoryObject @ 0x1406613C0 (NtQueryDirectoryObject.c)
 *     NtSetInformationObject @ 0x140691630 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140691AB8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v3; // rcx

  ExReleasePushLockEx(a1 + 296, 0LL);
  v3 = *(struct _DMA_ADAPTER **)a2;
  *(_DWORD *)(a2 + 32) = -286387660;
  HalPutDmaAdapter(v3);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
