/*
 * XREFs of ndisMDpc @ 0x1C00C18EC
 * Callers:
 *     ndis5InterruptDpc @ 0x1C00C1780 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00C1840 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F2F0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AACB8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AADA0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  __int64 Clock; // r14
  void (__fastcall *v5)(void *); // r15
  char v6; // bp
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rcx
  PKINTERRUPT *p_InterruptObject; // rcx
  KSYNCHRONIZE_ROUTINE *EnableInterruptHandler; // rdx
  __int64 v11; // r8
  __int64 v12; // rax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  Clock = 0LL;
  v5 = *(void (__fastcall **)(void *))(a2 + 32);
  if ( HIBYTE(dword_1C00E6050) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL, v7);
  }
  else
  {
    v6 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&v2->Lock);
  v2->MiniportThread = KeGetCurrentThread();
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    while ( v2->LockAcquired )
    {
      v2->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v2->Lock);
      KeStallExecutionProcessor(1u);
      KeAcquireSpinLockAtDpcLevel(&v2->Lock);
      v2->MiniportThread = KeGetCurrentThread();
    }
    v2->LockAcquired = 1;
    CurrentThread = KeGetCurrentThread();
    v2->MiniportThread = 0LL;
    v2->LockThread = CurrentThread;
    KeReleaseSpinLockFromDpcLevel(&v2->Lock);
    v5(v2->MiniportAdapterContext);
    KeAcquireSpinLockAtDpcLevel(&v2->Lock);
    v2->MiniportThread = KeGetCurrentThread();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_InterruptObject = &v2->Interrupt->InterruptObject;
    if ( p_InterruptObject )
    {
      EnableInterruptHandler = (KSYNCHRONIZE_ROUTINE *)v2->EnableInterruptHandler;
      if ( EnableInterruptHandler )
        KeSynchronizeExecution(*p_InterruptObject, EnableInterruptHandler, v2->MiniportAdapterContext);
    }
    ndisMProcessDeferred(v2);
    v2->LockThread = 0LL;
    v2->LockAcquired = 0;
  }
  v2->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v2->Lock);
  if ( v6 )
  {
    v12 = WmiGetClock(0LL, 0LL, v11);
    ndisTraceDpcEnd(v2, 1u, v12 - Clock);
  }
}
