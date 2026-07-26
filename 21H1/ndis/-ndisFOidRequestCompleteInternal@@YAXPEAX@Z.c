/*
 * XREFs of ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E7D0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C00694D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C00068A8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099764 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BDFC0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE144 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  _NDIS_OID_REQUEST *PendingOidRequest; // rax
  _REFERENCE_EX *p_PnPRef; // rdi
  int v4; // edx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v7; // bl
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  KIRQL v11; // al
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // bl
  __int64 v15; // r10
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  _BYTE *v18; // rdx
  bool v19; // zf
  char v20; // cl
  ULONG_PTR v21; // rsi
  unsigned int v22; // edx
  int v23; // ecx
  _QWORD v24[5]; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+48h] [rbp-10h]
  int v26; // [rsp+4Ch] [rbp-Ch]

  PendingOidRequest = Parameter->PendingOidRequest;
  p_PnPRef = &Parameter->PnPRef;
  v4 = *(_DWORD *)&PendingOidRequest->NdisReserved[8];
  v24[0] = 0LL;
  v24[1] = 0LL;
  v24[3] = 0LL;
  v26 = 0;
  v24[2] = Parameter;
  v24[4] = PendingOidRequest;
  v25 = v4;
  v5 = KeAcquireSpinLockRaiseToDpc(&Parameter->PnPRef.SpinLock);
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)p_PnPRef->RefCountTracker;
  ++p_PnPRef->ReferenceCount;
  v7 = v5;
  NdisReferenceWithTag(RefCountTracker, 0x13u);
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v7);
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v24, v8, v9, v10);
  v11 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  Parameter->LockThread = KeGetCurrentThread();
  if ( Parameter->OidRequestList.Flink != &Parameter->OidRequestList )
  {
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(&Parameter->Lock, v11);
    if ( (unsigned int)ndisQueueRequestWorkItem((struct _NDIS_MINIPORT_BLOCK *)Parameter, 0LL, 5) != 259 )
      ndisCancelOidRequestOnFilter(Parameter, 0LL, 1u);
    v11 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(&Parameter->Lock, v11);
  v12 = KeAcquireSpinLockRaiseToDpc(&p_PnPRef->SpinLock);
  v13 = (ULONG_PTR)p_PnPRef->RefCountTracker;
  v14 = v12;
  if ( v13 - 2 <= 1 )
    goto LABEL_11;
  if ( v13 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v13, 0LL);
  if ( *(_BYTE *)(v13 + 2) <= 0x13u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v13, 0x13uLL);
  if ( *(_BYTE *)(v13 + 1) )
  {
    if ( *(_BYTE *)(v13 + 1) != 1 )
      goto LABEL_11;
    v21 = v13 + 1224;
    v22 = *(_DWORD *)(v13 + 1280);
    v23 = (unsigned __int16)v22 >> 1;
    if ( v22 >> 17 < 0x3FFE && v23 == (v22 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 1224));
      *(_DWORD *)(v21 + 56) &= 0x10001u;
      goto LABEL_11;
    }
    if ( v23 != 0 || (v22 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 1224), 0);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  v15 = *(_QWORD *)(v13 + 8);
  if ( !v15 || (v16 = *(_BYTE *)(v13 + 3), v17 = 0, !v16) )
  {
LABEL_10:
    if ( _bittestandreset((signed __int32 *)(v13 + 16), 0x13u) )
      goto LABEL_11;
LABEL_28:
    ndisBugCheckEx(0x1EuLL, 0LL, v13, 0x13uLL);
  }
  while ( 1 )
  {
    v18 = (_BYTE *)(v15 + 2LL * v17);
    if ( *v18 == 19 )
    {
      v20 = v18[1];
      if ( v20 )
        break;
    }
    if ( ++v17 >= v16 )
      goto LABEL_10;
  }
  v18[1] = v20 - 1;
LABEL_11:
  v19 = p_PnPRef->ReferenceCount-- == 1;
  if ( v19 && !p_PnPRef->ZeroBased )
  {
    NdisFreeRefCount((ULONG_PTR)p_PnPRef->RefCountTracker);
    p_PnPRef->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v14);
}
