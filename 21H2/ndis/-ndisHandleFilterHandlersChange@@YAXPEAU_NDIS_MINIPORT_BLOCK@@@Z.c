/*
 * XREFs of ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026974
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372DC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00269CC (-ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002B064 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisHandleFilterHandlersChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  ndisQueryFilterInstanceHandlers(a1->LowestFilter);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ndisSetupLwfMiniportHandlers(a1);
  v2 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
}
