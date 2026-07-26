/*
 * XREFs of ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008ED20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0018624 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196A4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CAA0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067184 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100928 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A84 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106ABC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void ndisPktMonRegisterComponentsCallback(void)
{
  KIRQL v0; // al
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v2; // di
  KIRQL v3; // al
  char *v4; // rbx
  KIRQL v5; // di
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rbx
  KIRQL v8; // si
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v1 = ndisMiniportList;
  v2 = v0;
  while ( v1 )
  {
    if ( v1->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport(v1, 0x55u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v2);
      v1->PktMonComp = 0LL;
      ndisPktMonMiniportRegister(v1);
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v1, 0x55u);
    }
    v1 = v1->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v4 = (char *)ndisGlobalFilterList;
  v5 = v3;
  while ( v4 )
  {
    if ( (*((_DWORD *)v4 + 14) & 0x100) == 0 )
    {
      v9 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)v4 + 9, 2u, (enum _NDIS_REFERENCE_STATUS *)&v9) )
      {
        KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
        *(_OWORD *)(v4 + 792) = 0LL;
        ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v4);
        v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
        ndisDereferenceFilter(v4, 2u);
      }
    }
    v4 = (char *)*((_QWORD *)v4 + 13);
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v8 = v6;
  while ( NextGlobalOpen )
  {
    KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
    if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0 || !NextGlobalOpen->References )
    {
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
    }
    else
    {
      ndisMReferenceOpen((__int64)NextGlobalOpen, 0x13u);
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
      KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
      NextGlobalOpen->PktMonComp = 0LL;
      ndisPktMonOpenRegister(NextGlobalOpen);
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
      ndisMDereferenceOpenUnlocked((__int64)NextGlobalOpen, 19);
    }
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
}
