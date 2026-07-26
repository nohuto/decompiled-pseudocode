/*
 * XREFs of ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00087C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F4C (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r15
  char v6; // di
  char v7; // r12
  char v8; // r14
  int v9; // edx
  KIRQL v10; // r13
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  __int64 v13; // r8
  WORK_QUEUE_TYPE v14; // edx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 Clock; // [rsp+78h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C00E6150) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL, v15);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  if ( (FunctionContext->Flags & 0x80000000) != 0 || (FunctionContext->PnPFlags & 0x20080000) != 0 )
  {
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
    goto LABEL_19;
  }
  FunctionContext->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
  v8 = 1;
  v10 = KeAcquireSpinLockRaiseToDpc(&FunctionContext->Ref.SpinLock);
  if ( !FunctionContext->Ref.Closing )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)FunctionContext->RefCountTracker;
    if ( RefCountTracker )
      NdisReferenceWithTag(RefCountTracker);
    ReferenceCount = FunctionContext->Ref.ReferenceCount;
    FunctionContext->Ref.ReferenceCount = ReferenceCount + 1;
    if ( ReferenceCount != -1 )
      goto LABEL_9;
    FunctionContext->Ref.ReferenceCount = -1;
  }
  v8 = 0;
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      12,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)FunctionContext,
      FunctionContext->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&FunctionContext->Ref.SpinLock, v10);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange(&FunctionContext->CFHWorkItemQueued, 1, 0) )
    {
      ndisDereferenceMiniport(FunctionContext, 0x53u);
    }
    else
    {
      if ( FunctionContext->MajorNdisVersion > 6u
        || FunctionContext->MajorNdisVersion == 6 && FunctionContext->MinorNdisVersion >= 0x50u )
      {
        v14 = CustomPriorityWorkQueue|NormalWorkQueue;
      }
      else
      {
        v14 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      }
      ExQueueWorkItem(&FunctionContext->CFHWorkItem, v14);
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
LABEL_19:
  if ( v6 )
    KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
    FunctionContext->MiniportThread = KeGetCurrentThread();
    if ( (FunctionContext->Flags & 0x80000000) == 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
  }
  if ( v7 )
  {
    v16 = WmiGetClock(0LL, 0LL, v13);
    ndisTraceDpcEnd(FunctionContext, 4u, v16 - Clock);
  }
}
