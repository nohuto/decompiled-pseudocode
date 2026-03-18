/*
 * XREFs of SmKmFileInfoCleanup @ 0x1409269D0
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x140926A74 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x140927734 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140927BE4 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140928B40 (SmcCacheCleanup.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140203230 (IoSetThreadHardErrorMode.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     IoReuseIrp @ 0x1402EB1A0 (IoReuseIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x140927670 (SmKmSendUsageNotification.c)
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
