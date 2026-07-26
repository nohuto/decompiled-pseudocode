/*
 * XREFs of ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00093E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C005EFD4 (--1AutoAcquireMiniportSpinLock@@QEAA@XZ.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C00735B8 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A5540 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A7450 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE5F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE774 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F89E0 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int WSyncFlags; // eax
  int v7; // edx
  KIRQL v8; // r15
  unsigned int PnPFlags; // r8d
  signed int v10; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v12; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  bool v14; // zf
  __int64 v15; // rbx
  KIRQL v16; // al
  int v17; // edx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v19; // bp
  __int64 v20; // rcx
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // dl
  unsigned int v23; // ebx
  int v24; // edx
  KIRQL v25; // dl
  KIRQL v26; // bl
  int v27; // edx
  unsigned __int16 CFHangXTicks; // cx
  NDIS_REFCOUNT_HANDLE__ *v29; // rbx
  unsigned int v30; // edx
  int v31; // ecx
  char v32; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  struct _NDIS_MINIPORT_BLOCK *v34; // [rsp+40h] [rbp-38h] BYREF
  KIRQL NewIrql; // [rsp+48h] [rbp-30h]
  LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  v2 = 1;
  if ( a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync(a1, 1LL, 49LL, 0LL, 0) )
  {
    v2 = 0;
    goto LABEL_13;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    v26 = KfRaiseIrql(2u);
    v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
    if ( v26 != 2 )
      KeLowerIrql(v26);
  }
  else
  {
    v3 = ndisMInvokeCheckForHang(a1);
  }
  v4 = v3 != 0 ? 2 : 0;
  if ( a1->SelectiveSuspend )
    ndisClearBusy(a1, 1LL, 49LL);
  if ( v3 )
  {
LABEL_62:
    ndisMResetMiniportInternal(a1, v4);
    goto LABEL_13;
  }
  if ( (a1->Flags & 0x1000) != 0 )
    goto LABEL_13;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      Interval.QuadPart = -2500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v34 = a1;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 1) == 0 )
    {
      AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock((AutoAcquireMiniportSpinLock *)&v34);
      goto LABEL_13;
    }
    if ( (WSyncFlags & 2) == 0 )
      break;
    v27 = NewIrql;
    if ( NewIrql == 254 )
    {
      a1->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      goto LABEL_57;
    }
    if ( NewIrql != 255 )
    {
      a1->LockThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v27);
LABEL_57:
      NewIrql = -1;
    }
    if ( ++v5 >= 2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          17,
          10,
          (struct _GUID *)&WPP_c4a891a1b36a37a62238584369967b6d_Traceguids,
          (char)a1,
          (char)a1->PendingOidRequest);
      }
      v4 = 1;
      goto LABEL_62;
    }
  }
  CFHangXTicks = a1->CFHangXTicks;
  if ( CFHangXTicks )
    a1->CFHangXTicks = CFHangXTicks - 1;
  else
    a1->WSyncFlags = WSyncFlags | 2;
  if ( NewIrql == 254 )
  {
    a1->LockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  else if ( NewIrql != 255 )
  {
    v25 = NewIrql;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v25);
  }
LABEL_13:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    if ( (a1->Flags & 0x80000000) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x20080000) == 0 )
      {
        v10 = 1000 * a1->CheckForHangSeconds;
        MajorNdisVersion = a1->MajorNdisVersion;
        v12 = v10 / 5;
        DriverHandle = a1->DriverHandle;
        if ( MajorNdisVersion < 6u )
        {
          if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
          {
            v14 = DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler == 0LL;
            goto LABEL_19;
          }
        }
        else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx )
        {
          v14 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx == 0LL;
LABEL_19:
          if ( !v14 )
          {
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
              v12 = 4000;
            a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
            v15 = -10000LL * v10;
            KeClearEvent(&a1->CFHCompletedEvent);
            KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v15, 0, v12, &a1->WakeUpDpcTimer.Dpc);
          }
        }
      }
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      20,
      25,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1);
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v19 = v16;
  if ( RefCountTracker )
  {
    if ( (unsigned __int64)RefCountTracker - 2 <= 1 )
    {
      RefCountTracker = 0LL;
    }
    else if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( RefCountTracker )
    {
      if ( *((_BYTE *)RefCountTracker + 2) <= 0x53u )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, 0x53uLL);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) != 1 )
          goto LABEL_39;
        v29 = RefCountTracker + 1330;
        v30 = *((_DWORD *)RefCountTracker + 1344);
        v31 = (unsigned __int16)v30 >> 1;
        if ( v30 >> 17 < 0x3FFE && v31 == (v30 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
          *((_DWORD *)v29 + 14) &= 0x10001u;
          goto LABEL_39;
        }
        if ( v31 != 0 || (v30 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1330), 0);
          goto LABEL_39;
        }
      }
      else
      {
        v20 = *((_QWORD *)RefCountTracker + 1);
        if ( v20 )
        {
          v21 = *((_BYTE *)RefCountTracker + 3);
          v22 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v20 + 2LL * v22) == 83 )
              {
                v32 = *(_BYTE *)(v20 + 2LL * v22 + 1);
                if ( v32 )
                  break;
              }
              if ( ++v22 >= v21 )
                goto LABEL_38;
            }
            *(_BYTE *)(v20 + 2LL * v22 + 1) = v32 - 1;
            goto LABEL_39;
          }
        }
LABEL_38:
        if ( _bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
          goto LABEL_39;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
    }
  }
LABEL_39:
  v23 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v23;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      20,
      14,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v19);
  if ( !v23 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      26,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1);
  }
}
