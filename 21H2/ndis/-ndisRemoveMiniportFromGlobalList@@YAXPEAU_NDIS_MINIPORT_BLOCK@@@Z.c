/*
 * XREFs of ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071198
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C0060FA0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011DEF4 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E404 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisRemoveMiniportFromGlobalList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  struct _NDIS_MINIPORT_BLOCK **p_NextGlobalMiniport; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  p_NextGlobalMiniport = &ndisMiniportList;
  while ( v3 )
  {
    if ( v3 == a1 )
    {
      *p_NextGlobalMiniport = a1->NextGlobalMiniport;
      break;
    }
    p_NextGlobalMiniport = &v3->NextGlobalMiniport;
    v3 = v3->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
}
