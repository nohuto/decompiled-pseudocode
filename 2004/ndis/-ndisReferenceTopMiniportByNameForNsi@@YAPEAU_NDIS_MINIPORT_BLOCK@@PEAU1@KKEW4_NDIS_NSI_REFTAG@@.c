/*
 * XREFs of ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001B868
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017204 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4B8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BB1C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        __int64 a3,
        char a4,
        enum _NDIS_NSI_REFTAG a5,
        enum _NDIS_MP_REFTAG a6)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r13
  struct _NDIS_MINIPORT_BLOCK *v7; // r15
  int v8; // r12d
  int v9; // ebx
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // rdi
  KIRQL v12; // si
  bool v13; // zf
  KSPIN_LOCK *p_SpinLock; // rbp
  KIRQL v15; // r14
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v18; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v20; // r14
  unsigned int v21; // r14d
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v23; // rcx
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  unsigned int *p_Number; // rax
  int v29; // [rsp+88h] [rbp+10h]
  KIRQL v30; // [rsp+90h] [rbp+18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = ~a2;
  v9 = 1;
  v29 = 1;
  if ( !a1->BindPaths )
    return 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v11 = ndisMiniDriverList;
  v12 = v10;
  v13 = ndisMiniDriverList == 0LL;
  while ( !v13 )
  {
    p_SpinLock = &v11->Ref.SpinLock;
    v15 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    if ( !v11->Ref.Closing )
    {
      ReferenceCount = v11->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v9 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v11->Ref.RefCountTracker;
        v11->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 8u);
        v9 = 0;
      }
    }
    KeReleaseSpinLock(&v11->Ref.SpinLock, v15);
    if ( v9 )
    {
      NextDriver = v11->NextDriver;
    }
    else
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
      v18 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
      MiniportQueue = v11->MiniportQueue;
      v20 = v18;
      v30 = v18;
      if ( MiniportQueue )
      {
        v21 = v29;
        do
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( BindPaths )
          {
            if ( BindPaths->Number >= v21 )
            {
              v23 = a1->BindPaths;
              if ( v23->Paths[0].Length == BindPaths->Paths[0].Length
                && !memcmp(v23->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v23->Paths[0].Length) )
              {
                KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
                MiniportQueue->MiniportThread = KeGetCurrentThread();
                if ( (v8 & MiniportQueue->Flags & 0x80200020) == 0
                  && (MiniportQueue->PnPFlags & 0x1084110) == 0
                  && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                  && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
                {
                  if ( ndisReferenceMiniport(MiniportQueue, a6) )
                  {
                    v7 = v6;
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, a5);
                    p_Number = &MiniportQueue->BindPaths->Number;
                    ++MiniportQueue->NsiOpenReferences;
                    v6 = MiniportQueue;
                    v21 = *p_Number;
                  }
                }
                MiniportQueue->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
                if ( v7 )
                {
                  ndisDereferenceMiniportForNsi(v7, a5, a6);
                  v7 = 0LL;
                }
              }
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v29 = v21;
        v20 = v30;
        p_SpinLock = &v11->Ref.SpinLock;
      }
      KeReleaseSpinLock(p_SpinLock, v20);
      v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v11->NextDriver;
      v12 = v24;
      ndisDereferenceDriver(v11, 1u, MDRVREF_MPREFT);
    }
    v11 = NextDriver;
    v13 = NextDriver == 0LL;
    v9 = 1;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  return v6;
}
