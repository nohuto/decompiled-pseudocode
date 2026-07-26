/*
 * XREFs of ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0008180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE5F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE774 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE920 (NdisFreeRefCount.c)
 */

void __fastcall ndisMTimerDpcX(struct _KDPC *a1, char *a2, void *a3, void *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  __int64 Clock; // r12
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  KIRQL v8; // r15
  int v9; // ebp
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rcx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // dl
  char v21; // di
  int v22; // edx
  __int64 v23; // r8
  void **i; // rcx
  char *v25; // rax
  __int64 v26; // rax
  ULONG_PTR v27; // rdi
  unsigned int v28; // edx
  int v29; // ecx
  char v30; // al
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK *v32; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v34; // bl
  PVOID v35; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v40; // edx

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2 + 18);
  Clock = 0LL;
  DriverHandle = v4->DriverHandle;
  v8 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v9 = 1;
  if ( !DriverHandle->Ref.Closing )
  {
    ReferenceCount = DriverHandle->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v9 = 2;
    }
    else
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)DriverHandle->Ref.RefCountTracker;
      DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(RefCountTracker);
      v9 = 0;
    }
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( v9 )
    return;
  if ( HIBYTE(dword_1C00E6150) )
  {
    LOBYTE(v9) = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL, v23);
  }
  v13 = *((_QWORD *)a2 + 18);
  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 3760) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1880));
    for ( i = (void **)&v4->TimerQueue; ; i = (void **)(v25 + 152) )
    {
      v25 = (char *)*i;
      if ( !*i )
        break;
      if ( v25 == a2 )
      {
        if ( !*((_DWORD *)a2 + 15) )
          *i = (void *)*((_QWORD *)a2 + 19);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)a2 + 18) + 1880LL));
  }
  if ( (v4->PnPFlags & 0x1000000) == 0 )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2 + 16))(0LL, *((_QWORD *)a2 + 17), 0LL, 0LL);
  if ( (_BYTE)v9 )
  {
    v26 = WmiGetClock(0LL, 0LL, v12);
    ndisTraceDpcEnd(v4, 2u, v26 - Clock);
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v15 = (ULONG_PTR)DriverHandle->Ref.RefCountTracker;
  v16 = v14;
  if ( v15 - 2 <= 1 )
  {
    v15 = 0LL;
  }
  else if ( v15 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v15, 0LL);
  }
  if ( !v15 )
    goto LABEL_22;
  if ( *(_BYTE *)(v15 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v15, 0xBuLL);
  if ( *(_BYTE *)(v15 + 1) )
  {
    if ( *(_BYTE *)(v15 + 1) != 1 )
      goto LABEL_22;
    v27 = v15 + 712;
    v28 = *(_DWORD *)(v15 + 768);
    v29 = (unsigned __int16)v28 >> 1;
    if ( v28 >> 17 < 0x3FFE && v29 == (v28 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 712));
      *(_DWORD *)(v27 + 56) &= 0x10001u;
      goto LABEL_22;
    }
    if ( v29 != 0 || (v28 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 712), 0);
      goto LABEL_22;
    }
LABEL_46:
    ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
  }
  v17 = *(_QWORD *)(v15 + 8);
  if ( v17 )
  {
    v18 = *(_BYTE *)(v15 + 3);
    v19 = 0;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v17 + 2LL * v19) == 11 )
        {
          v30 = *(_BYTE *)(v17 + 2LL * v19 + 1);
          if ( v30 )
            break;
        }
        if ( ++v19 >= v18 )
          goto LABEL_21;
      }
      *(_BYTE *)(v17 + 2LL * v19 + 1) = v30 - 1;
      goto LABEL_22;
    }
  }
LABEL_21:
  if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xBu) )
    goto LABEL_46;
LABEL_22:
  if ( DriverHandle->Ref.ReferenceCount-- == 1 )
  {
    v21 = 1;
    if ( !DriverHandle->Ref.ZeroBased )
    {
      NdisFreeRefCount((ULONG_PTR)DriverHandle->Ref.RefCountTracker);
      DriverHandle->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
    }
  }
  else
  {
    v21 = 0;
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v16);
  if ( v21 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v22,
        20,
        23,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)DriverHandle);
    }
    v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v32 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    v34 = v31;
    while ( v32 )
    {
      if ( v32 == DriverHandle )
      {
        v35 = ndisDriverObject;
        *p_NextDriver = DriverHandle->NextDriver;
        ObfDereferenceObject(v35);
        break;
      }
      p_NextDriver = &v32->NextDriver;
      v32 = v32->NextDriver;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v34);
    Buffer = DriverHandle->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      DriverHandle->ImageName.Buffer = 0LL;
    }
    NdisDriverInfo = DriverHandle->NdisDriverInfo;
    if ( NdisDriverInfo )
    {
      ExFreePoolWithTag(NdisDriverInfo, 0);
      DriverHandle->NdisDriverInfo = 0LL;
    }
    if ( (DriverHandle->Flags & 1) != 0 )
    {
      PendingDeviceList = DriverHandle->PendingDeviceList;
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
    KeSetEvent(&DriverHandle->MiniportsRemovedEvent, 0, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v40,
        20,
        24,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)DriverHandle);
    }
  }
}
