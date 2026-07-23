/*
 * XREFs of PnpDereferenceNotify @ 0x1406FD1E8
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1406FEACC (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14089FC28 (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x1408B30D8 (PipKsrNotifyDrivers.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
