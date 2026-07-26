/*
 * XREFs of ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BE3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z @ 0x1C00177D0 (-NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006FC60 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMTimerDpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_TIMER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  __int64 Clock; // r15
  char v7; // r14
  __int64 v8; // r8
  void **i; // rcx
  struct _NDIS_MINIPORT_TIMER *v10; // rax
  void (__fastcall *MiniportTimerFunction)(void *, void *, void *, void *); // rbx
  __int64 v12; // r8
  __int64 v13; // rax

  Miniport = DeferredContext->Miniport;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00E6150) )
  {
    v7 = 1;
    ndisTraceDpcStart(Miniport, 2u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  while ( 1 )
  {
    KeAcquireSpinLockAtDpcLevel(&Miniport->Lock);
    Miniport->MiniportThread = KeGetCurrentThread();
    if ( !Miniport->LockAcquired )
      break;
    Miniport->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
    KeStallExecutionProcessor(1u);
  }
  Miniport->LockAcquired = 1;
  Miniport->LockThread = KeGetCurrentThread();
  if ( (Miniport->DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&Miniport->TimerQueueLock);
    for ( i = (void **)&Miniport->TimerQueue; ; i = (void **)&v10->NextTimer )
    {
      v10 = (struct _NDIS_MINIPORT_TIMER *)*i;
      if ( !*i )
        break;
      if ( v10 == DeferredContext )
      {
        if ( !DeferredContext->Timer.Period )
          *i = DeferredContext->NextTimer;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&Miniport->TimerQueueLock);
  }
  if ( (Miniport->Flags & 2) != 0 )
  {
    NdisMSetTimer(DeferredContext, 10);
  }
  else if ( (Miniport->PnPFlags & 0x1000000) == 0 )
  {
    MiniportTimerFunction = DeferredContext->MiniportTimerFunction;
    Miniport->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
    MiniportTimerFunction(0LL, DeferredContext->MiniportTimerContext, 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel(&Miniport->Lock);
    Miniport->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(Miniport);
  }
  Miniport->LockAcquired = 0;
  Miniport->LockThread = 0LL;
  Miniport->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
  if ( v7 )
  {
    v13 = WmiGetClock(0LL, 0LL, v12);
    ndisTraceDpcEnd(Miniport, 2u, v13 - Clock);
  }
}
