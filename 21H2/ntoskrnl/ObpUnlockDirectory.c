/*
 * XREFs of ObpUnlockDirectory @ 0x14026CAAC
 * Callers:
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     NtSetInformationObject @ 0x1405F14A0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1405F1928 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtQueryDirectoryObject @ 0x1406561E0 (NtQueryDirectoryObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406F16A8 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
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
