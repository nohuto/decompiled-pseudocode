/*
 * XREFs of ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C0018CA0
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0016030 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0018B18 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

struct _NDIS_FILTER_BLOCK *__fastcall ndisGetLowerFilterWithPnpRef(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *HighestFilter,
        unsigned __int8 a3)
{
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( !HighestFilter )
  {
    HighestFilter = a1->HighestFilter;
    goto LABEL_3;
  }
  do
  {
    HighestFilter = HighestFilter->LowerFilter;
LABEL_3:
    if ( !HighestFilter )
      break;
    v8 = 0;
  }
  while ( !ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, a3, (enum _NDIS_REFERENCE_STATUS *)&v8) );
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return HighestFilter;
}
