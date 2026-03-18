/*
 * XREFs of SmKmFileInfoCleanup @ 0x140927C80
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x140927D24 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x1409289E4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140928E94 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140929DF0 (SmcCacheCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IoReuseIrp @ 0x140324AD0 (IoReuseIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x140928920 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  struct _DMA_ADAPTER *v5; // rcx
  IRP *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
  v4 = v2;
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 0);
  v5 = *(struct _DMA_ADAPTER **)(a1 + 16);
  if ( v5 )
    HalPutDmaAdapter(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v7 )
    HalPutDmaAdapter(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    CmSiFreeMemory(v8);
  return IoSetThreadHardErrorMode(v4);
}
