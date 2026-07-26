/*
 * XREFs of ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000EBD0
 * Callers:
 *     ndisIfGetMiniportStatistics @ 0x1C00FA4A0 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C0127CB8 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BDFC0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE144 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // r12
  KIRQL v6; // bp
  _REFERENCE_EX *p_Ref; // r15
  int v8; // ebx
  KIRQL v9; // si
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v12; // r13
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  char v14; // r15
  bool v15; // zf
  char v16; // bp
  KIRQL v17; // r14
  NDIS_REFCOUNT_HANDLE__ *v18; // rcx
  unsigned int v19; // ecx
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v22; // al
  ULONG_PTR v23; // r8
  KIRQL v24; // r14
  __int64 v25; // r10
  unsigned __int8 v26; // r9
  unsigned __int8 v27; // al
  _BYTE *v28; // rdx
  char v29; // bl
  char v31; // cl
  ULONG_PTR v32; // rbx
  unsigned int v33; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v34; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v40; // [rsp+30h] [rbp-68h]
  unsigned __int8 v41; // [rsp+40h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v42; // [rsp+48h] [rbp-50h]
  _REFERENCE_EX *v43; // [rsp+50h] [rbp-48h]
  char v46; // [rsp+B8h] [rbp+20h]

  v46 = 0;
  v41 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
  v42 = ndisMiniDriverList;
  do
  {
    if ( !v5 )
      break;
    p_Ref = &v5->Ref;
    v43 = &v5->Ref;
    v8 = 1;
    v9 = KeAcquireSpinLockRaiseToDpc(&v5->Ref.SpinLock);
    if ( !v5->Ref.Closing )
    {
      ReferenceCount = v5->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v8 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v5->Ref.RefCountTracker;
        v5->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 7u);
        v8 = 0;
      }
    }
    KeReleaseSpinLock(&v5->Ref.SpinLock, v9);
    if ( v8 )
    {
      NextDriver = v5->NextDriver;
      goto LABEL_38;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
    v12 = KeAcquireSpinLockRaiseToDpc(&v5->Ref.SpinLock);
    MiniportQueue = v5->MiniportQueue;
    if ( v46 )
      goto LABEL_26;
    v14 = 0;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == a1 )
      {
        v14 = 1;
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v15 = (a1->Flags & 0x80200020) == 0;
        a1->MiniportThread = KeGetCurrentThread();
        if ( v15
          && (a1->PnPFlags & 0x1084110) == 0
          && a1->PnPDeviceState == NdisPnPDeviceStarted
          && a1->CurrentDevicePowerState == PowerDeviceD0 )
        {
          v16 = 1;
          v17 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
          if ( !a1->Ref.Closing )
          {
            v18 = a1->RefCountTracker;
            if ( v18 )
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v18, a3);
            v19 = a1->Ref.ReferenceCount;
            a1->Ref.ReferenceCount = v19 + 1;
            if ( v19 != -1 )
            {
LABEL_19:
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v40) = a1->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xCu,
                  (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
                  (char)a1,
                  v40);
              }
              KeReleaseSpinLock(&a1->Ref.SpinLock, v17);
              if ( v16 )
              {
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->NsiRefCountTracker, a2);
                ++a1->NsiOpenReferences;
                v41 = 1;
              }
              goto LABEL_23;
            }
            a1->Ref.ReferenceCount = -1;
          }
          v16 = 0;
          goto LABEL_19;
        }
LABEL_23:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v14 )
        break;
    }
    v5 = v42;
    v46 = v14;
    p_Ref = v43;
LABEL_26:
    KeReleaseSpinLock(&p_Ref->SpinLock, v12);
    v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v5->NextDriver;
    v6 = v20;
    v22 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v23 = (ULONG_PTR)p_Ref->RefCountTracker;
    v24 = v22;
    if ( v23 - 2 > 1 )
    {
      if ( v23 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v23, 0LL);
      if ( *(_BYTE *)(v23 + 2) <= 7u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v23, 7uLL);
      if ( *(_BYTE *)(v23 + 1) )
      {
        if ( *(_BYTE *)(v23 + 1) != 1 )
          goto LABEL_35;
        v32 = v23 + 456;
        v33 = *(_DWORD *)(v23 + 512);
        if ( v33 >> 17 < 0x3FFE && (unsigned __int16)v33 >> 1 == (v33 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 456));
          *(_DWORD *)(v32 + 56) &= 0x10001u;
          goto LABEL_35;
        }
        if ( (unsigned __int16)v33 >> 1 != 0 || (v33 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 456), 0);
          goto LABEL_35;
        }
      }
      else
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( v25 )
        {
          v26 = *(_BYTE *)(v23 + 3);
          v27 = 0;
          if ( v26 )
          {
            while ( 1 )
            {
              v28 = (_BYTE *)(v25 + 2LL * v27);
              if ( *v28 == 7 )
              {
                v31 = v28[1];
                if ( v31 )
                  break;
              }
              if ( ++v27 >= v26 )
                goto LABEL_34;
            }
            v28[1] = v31 - 1;
            goto LABEL_35;
          }
        }
LABEL_34:
        if ( _bittestandreset((signed __int32 *)(v23 + 16), 7u) )
          goto LABEL_35;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v23, 7uLL);
    }
LABEL_35:
    v15 = p_Ref->ReferenceCount-- == 1;
    if ( v15 )
    {
      v29 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v29 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v24);
    if ( v29 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x17u,
          (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
          v5);
      v34 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v34 != v5 )
        {
          p_NextDriver = &v34->NextDriver;
          v34 = v34->NextDriver;
          if ( !v34 )
            goto LABEL_60;
        }
        *p_NextDriver = v5->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_60:
      Buffer = v5->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v5->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v5->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v5->NdisDriverInfo = 0LL;
      }
      if ( (v5->Flags & 1) != 0 )
      {
        PendingDeviceList = v5->PendingDeviceList;
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
        }
      }
      KeSetEvent(&v5->MiniportsRemovedEvent, 0, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x18u,
          (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
          v5);
    }
LABEL_38:
    v5 = NextDriver;
    v42 = NextDriver;
  }
  while ( !v46 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return v41;
}
