/*
 * XREFs of ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015A68
 * Callers:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E194 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  unsigned __int64 *p_PowerStateLock; // rsi
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *LowPowerRcvReturnNbls; // rcx

  p_PowerStateLock = &a1->PowerStateLock;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
  if ( a2 )
    a1->SurpriseRemoveFlushedRcvReturnQueue = 1;
  LowPowerRcvReturnNbls = a1->LowPowerRcvReturnNbls;
  if ( LowPowerRcvReturnNbls )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      ndisNblTrackerTransferOwnershipInternal(LowPowerRcvReturnNbls, 0LL, (unsigned __int64)a1->NblTracker, 0x8Du, 1u);
      LowPowerRcvReturnNbls = a1->LowPowerRcvReturnNbls;
    }
    a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler(
      a1->MiniportAdapterContext,
      LowPowerRcvReturnNbls,
      1u);
    a1->LowPowerRcvReturnNbls = 0LL;
  }
  KeReleaseSpinLock(p_PowerStateLock, v5);
}
