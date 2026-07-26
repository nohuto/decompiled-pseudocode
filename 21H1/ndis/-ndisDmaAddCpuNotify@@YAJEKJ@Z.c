/*
 * XREFs of ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00626C8
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00759C0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C4EE8 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C4F94 (PplHotAddProcStartNotify.c)
 */

__int64 __fastcall ndisDmaAddCpuNotify(char a1, int a2, unsigned int a3)
{
  int started; // esi
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  KIRQL v9; // di
  unsigned int PnPDeviceState; // eax
  int v11; // ecx
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  void *SGListLookasideList; // rcx
  KIRQL v14; // dl
  KIRQL NewIrql; // [rsp+58h] [rbp+20h] BYREF

  started = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  NewIrql = v7;
  while ( v8 && started >= 0 )
  {
    PnPDeviceState = v8->PnPDeviceState;
    if ( PnPDeviceState > 5 || (v11 = 41, !_bittest(&v11, PnPDeviceState)) )
    {
      if ( ndisReferenceMiniport(v8, 0x43u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v9);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
        MiniportSGDmaBlock = v8->MiniportSGDmaBlock;
        if ( MiniportSGDmaBlock )
        {
          SGListLookasideList = MiniportSGDmaBlock->SGListLookasideList;
          if ( SGListLookasideList )
          {
            if ( a1 )
              started = PplHotAddProcStartNotify(SGListLookasideList, (unsigned int)(a2 + 1));
            else
              PplHotAddProcCompleteNotify(SGListLookasideList, a3);
          }
        }
        v14 = NewIrql;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(&v8->Lock, v14);
        v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        NewIrql = v9;
        ndisDereferenceMiniport(v8, 0x43u);
      }
    }
    v8 = v8->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v9);
  return (unsigned int)started;
}
