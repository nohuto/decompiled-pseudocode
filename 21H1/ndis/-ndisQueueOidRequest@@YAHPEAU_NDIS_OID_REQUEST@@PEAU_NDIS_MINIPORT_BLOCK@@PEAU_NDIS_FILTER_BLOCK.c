/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF54
 * Callers:
 *     NdisFOidRequest @ 0x1C000C370 (NdisFOidRequest.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C220 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009A320 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C009E310 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C00068A8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000F420 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0018624 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A61C (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001BE3C (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidSendToMiniportDirect@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001BEA0 (-ndisOidSendToMiniportDirect@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0038CD4 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0068D6C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisQueueOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  unsigned __int64 *p_Lock; // r13
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int64 v10; // rdx
  struct _NDIS_MINIPORT_BLOCK *NextRequestHandle; // rbx
  KIRQL v12; // al
  bool v13; // zf
  int v14; // r15d
  unsigned __int16 SystemArgument1; // cx
  KIRQL v16; // al
  struct _NDIS_REFCOUNT_BLOCK *SystemArgument2; // rcx
  KIRQL v18; // bl
  unsigned int v19; // eax
  unsigned int v20; // ebx
  KIRQL v21; // dl
  KIRQL v22; // di
  KIRQL v24; // dl
  unsigned int v25; // eax
  KIRQL v26; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp-10h] BYREF
  KIRQL v28; // [rsp+31h] [rbp-Fh] BYREF
  KIRQL v29; // [rsp+32h] [rbp-Eh]
  _DWORD v30[3]; // [rsp+34h] [rbp-Ch] BYREF

  p_Lock = &a2->Lock;
  v7 = 0LL;
  NewIrql = 0;
  if ( ndisOidSendToMiniportDirect(a2, a1) )
  {
    NextRequestHandle = a2;
  }
  else
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(p_Lock);
    a2->MiniportThread = KeGetCurrentThread();
    if ( a3 )
      NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a3->NextRequestHandle;
    else
      NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a2->Next.RequestHandle;
    if ( a4 )
    {
      v30[0] = 0;
      if ( ndisReferenceRefEx(
             (PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext,
             0x11u,
             (enum _NDIS_REFERENCE_STATUS *)v30) )
      {
        if ( a4->BaseMiniport->WakeUpDpcTimer.Timer.TimerListEntry.Flink )
        {
          NextRequestHandle = a4;
        }
        else if ( a4->Unused2 )
        {
          NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a4->Unused2;
        }
        ndisDereferenceRef((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext, 0x11u);
      }
    }
    if ( NextRequestHandle->Header.Type == 5 )
    {
      do
      {
        v7 = NextRequestHandle;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext);
        v13 = BYTE2(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) == 0;
        v14 = 1;
        v29 = v12;
        if ( v13 )
        {
          SystemArgument1 = (unsigned __int16)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1;
          if ( SystemArgument1 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v14 = 2;
          }
          else
          {
            LOWORD(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
            NdisReferenceWithTag(
              (struct _NDIS_REFCOUNT_BLOCK *)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument2,
              0xFu);
            v12 = v29;
            v14 = 0;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v12);
        if ( !v14 )
          break;
        NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)NextRequestHandle->Unused2;
        v7 = 0LL;
      }
      while ( NextRequestHandle->Header.Type == 5 );
      p_Lock = &a2->Lock;
    }
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, NewIrql);
  }
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(a2, v10, a1);
  if ( KeGetCurrentIrql() )
  {
    v20 = ndisQueueRequestWorkItem(NextRequestHandle, a1, NextRequestHandle->Header.Type);
  }
  else if ( v7 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v7->WakeUpDpcTimer.Dpc.DeferredContext);
    SystemArgument2 = (struct _NDIS_REFCOUNT_BLOCK *)v7->WakeUpDpcTimer.Dpc.SystemArgument2;
    ++LOWORD(v7->WakeUpDpcTimer.Dpc.SystemArgument1);
    v18 = v16;
    NdisReferenceWithTag(SystemArgument2, 0xDu);
    KeReleaseSpinLock((PKSPIN_LOCK)&v7->WakeUpDpcTimer.Dpc.DeferredContext, v18);
    NewIrql = KeAcquireSpinLockRaiseToDpc(p_Lock);
    a2->MiniportThread = KeGetCurrentThread();
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v7->FirstPendingPacket);
    v7->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
    v19 = ndisFQueueOidRequest((struct _NDIS_FILTER_BLOCK *)v7, a1);
    v7->ReturnPacketsQueue = 0LL;
    v20 = v19;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v7->FirstPendingPacket);
    v21 = NewIrql;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v21);
    if ( !v20 )
    {
      if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, v7, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        v28 = 0;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v7, &v28);
        LOBYTE(v7->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v7);
        v24 = v28;
        v7->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&v7->FirstPendingPacket, v24);
      }
      v20 = 259;
    }
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v7->WakeUpDpcTimer.Dpc.DeferredContext);
    NdisDereferenceWithTag((ULONG_PTR)v7->WakeUpDpcTimer.Dpc.SystemArgument2, 0xDu);
    v13 = LOWORD(v7->WakeUpDpcTimer.Dpc.SystemArgument1)-- == 1;
    if ( v13 && !BYTE3(v7->WakeUpDpcTimer.Dpc.SystemArgument1) )
    {
      NdisFreeRefCount((ULONG_PTR)v7->WakeUpDpcTimer.Dpc.SystemArgument2);
      v7->WakeUpDpcTimer.Dpc.SystemArgument2 = (void *)1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&v7->WakeUpDpcTimer.Dpc.DeferredContext, v22);
  }
  else
  {
    if ( !ndisReferenceMiniport(a2, 0x48u) )
      return (unsigned int)-1073741823;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    v25 = ndisMQueueOidRequest(a2, a1);
    v26 = NewIrql;
    a2->MiniportThread = 0LL;
    v20 = v25;
    KeReleaseSpinLock(p_Lock, v26);
    if ( !v20 )
    {
      ndisMDoOidRequest(a2);
      v20 = 259;
    }
    ndisDereferenceMiniport(a2, 0x48u);
  }
  if ( v20 != 259 && v7 )
    ndisDereferenceRef((PKSPIN_LOCK)&v7->WakeUpDpcTimer.Dpc.DeferredContext, 0xFu);
  return v20;
}
