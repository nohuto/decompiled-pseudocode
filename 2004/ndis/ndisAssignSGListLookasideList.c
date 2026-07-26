/*
 * XREFs of ndisAssignSGListLookasideList @ 0x1C0034068
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0033984 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisAssignSGListLookasideList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  KIRQL v5; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8), &NewIrql);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = NewIrql;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(v4 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v5);
}
