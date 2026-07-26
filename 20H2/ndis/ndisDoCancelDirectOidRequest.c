/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1C00AE340
 * Callers:
 *     ndisFCancelDirectOidRequestInternal @ 0x1C00AE4E0 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisCancelDirectOidRequest @ 0x1C00AE7B0 (NdisCancelDirectOidRequest.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A188 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A53C0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A72D0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisFInvokeCancelDirectOidRequest @ 0x1C00AE624 (ndisFInvokeCancelDirectOidRequest.c)
 *     ?ndisMInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C00AE6E8 (-ndisMInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2, void *a3)
{
  bool v3; // bp
  struct _NDIS_FILTER_BLOCK *v5; // rdi
  struct _NDIS_FILTER_BLOCK *v7; // r15
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // r14
  UCHAR Type; // bl
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  NewIrql = 0;
  v5 = a2;
  if ( a2 )
  {
    v12 = 0;
    v3 = ndisReferenceRefEx(&a2->PnPRef.SpinLock, 4u, (enum _NDIS_REFERENCE_STATUS *)&v12);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( v5->FilterDriver->DefaultFilterCharacteristics.CancelDirectOidRequestHandler )
        {
          ndisFInvokeCancelDirectOidRequest((char)v5);
          goto LABEL_12;
        }
        v7 = v5;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK(v5, &NewIrql);
        NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)v5->NextDirectRequestHandle;
        Type = NextDirectRequestHandle->Header.Type;
        ndisDereferenceRef(&v5->PnPRef.SpinLock, 4u);
        v3 = 0;
        if ( Type != 5 )
          break;
        v12 = 0;
        v5 = NextDirectRequestHandle;
        v3 = ndisReferenceRefEx(&NextDirectRequestHandle->PnPRef.SpinLock, 4u, (enum _NDIS_REFERENCE_STATUS *)&v12);
        if ( !v3 )
          goto LABEL_8;
LABEL_9:
        v10 = NewIrql;
        v7->LockThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v10);
        if ( !v5 )
          goto LABEL_12;
      }
      a1 = (struct _NDIS_MINIPORT_BLOCK *)NextDirectRequestHandle;
LABEL_8:
      v5 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_12:
    if ( a1
      && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a1->DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler
      && (!a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync((__int64)a1)) )
    {
      ndisMInvokeCancelDirectOidRequest(a1, a3);
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 51);
    }
  }
  if ( v3 )
    ndisDereferenceRef(&v5->PnPRef.SpinLock, 4u);
}
