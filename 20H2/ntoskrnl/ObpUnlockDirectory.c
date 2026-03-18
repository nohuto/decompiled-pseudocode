/*
 * XREFs of ObpUnlockDirectory @ 0x14020AEB8
 * Callers:
 *     ObpReleaseLookupContext @ 0x14020AE7C (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x1405FD5E0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406B533C (ObpLookupDirectoryUsingHash.c)
 *     NtSetInformationObject @ 0x1406BB240 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406BB51C (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
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
