/*
 * XREFs of ObpUnlockDirectory @ 0x14025B2D4
 * Callers:
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x140612FE0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BC61C (ObpLookupDirectoryUsingHash.c)
 *     NtSetInformationObject @ 0x1406C12A0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406C1728 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
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
