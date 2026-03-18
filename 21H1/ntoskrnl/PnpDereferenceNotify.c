/*
 * XREFs of PnpDereferenceNotify @ 0x140685008
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x14070AA74 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14089B6A8 (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x1408AEB58 (PipKsrNotifyDrivers.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID **P)
{
  PVOID *v3; // rax
  PVOID *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  PVOID *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    HalPutDmaAdapter((PADAPTER_OBJECT)P[6]);
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v5 = (struct _DMA_ADAPTER *)P[11];
      if ( v5 )
      {
        HalPutDmaAdapter(v5);
        P[11] = 0LL;
      }
    }
    v6 = P[3];
    if ( v6 )
    {
      ZwClose(v6);
      P[3] = 0LL;
    }
    ExDeleteResourceLite((PERESOURCE)P[9]);
    ExFreePoolWithTag(P[9], 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
