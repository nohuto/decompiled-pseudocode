/*
 * XREFs of ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001E8AC
 * Callers:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001E814 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D764 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C0099A98 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A4C5C (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C00A5DC0 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00AF66C (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C00068A8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001986C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C0099904 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        struct _NDIS_OID_REQUEST *a4)
{
  int v4; // r14d
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rdi
  int v6; // r14d
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  KIRQL v12; // dl
  KIRQL v13; // dl
  KIRQL v14; // dl
  struct _NDIS_MINIPORT_BLOCK *v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+4Ch] [rbp-4h]
  KIRQL NewIrql; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_DWORD *)&a2->NdisReserved[16];
  AllDirectRequestsCompletedEvent = 0LL;
  v17 = 0LL;
  v6 = v4 & 0x200000;
  NewIrql = 0;
  v18 = a2;
  v19 = a3;
  v16 = 0LL;
  v15 = a1;
  v20 = (a4 != 0LL) | 2;
  ndisReferenceMiniportNoCheck(a1, 0x4Bu);
  if ( a4 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v13 = NewIrql;
    a1->WSyncFlags &= ~1u;
    a1->ProcessedOidRequest = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v13);
  }
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v15, v9, v10, v11);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( v6 )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 && !a1->DirectOidRequestCount )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  else if ( a1->OidRequestList.Flink == &a1->OidRequestList )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 )
    {
      AllDirectRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
    }
  }
  else
  {
    v14 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v14);
    if ( (unsigned int)ndisQueueRequestWorkItem(a1, 0LL, 17) != 259 )
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  }
  v12 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  if ( AllDirectRequestsCompletedEvent )
    KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
  ndisDereferenceMiniport(a1, 0x4Bu);
}
