/*
 * XREFs of ObpUnlockDirectory @ 0x140297B54
 * Callers:
 *     ObpReleaseLookupContext @ 0x140297B18 (ObpReleaseLookupContext.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     NtQueryDirectoryObject @ 0x14068B160 (NtQueryDirectoryObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406DD708 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406DD85C (ObpLookupDirectoryUsingHash.c)
 *     NtSetInformationObject @ 0x1406E1820 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406E1CA8 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
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
