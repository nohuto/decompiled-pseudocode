/*
 * XREFs of ndisMDpcX @ 0x1C00C1FC0
 * Callers:
 *     ndis5InterruptDpc @ 0x1C00C1C40 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00C1D00 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB178 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB260 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMDpcX(__int64 a1, __int64 a2, __int64 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v6)(void *); // r14
  char v7; // si
  __int64 v8; // r8
  PKINTERRUPT *p_InterruptObject; // rcx
  KSYNCHRONIZE_ROUTINE *EnableInterruptHandler; // rdx
  __int64 v11; // rax

  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  Clock = 0LL;
  v6 = *(void (__fastcall **)(void *))(a2 + 32);
  if ( HIBYTE(dword_1C00E6180) )
  {
    v7 = 1;
    ndisTraceDpcStart(v3, 1u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    v6(v3->MiniportAdapterContext);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_InterruptObject = &v3->Interrupt->InterruptObject;
    if ( p_InterruptObject )
    {
      EnableInterruptHandler = (KSYNCHRONIZE_ROUTINE *)v3->EnableInterruptHandler;
      if ( EnableInterruptHandler )
        KeSynchronizeExecution(*p_InterruptObject, EnableInterruptHandler, v3->MiniportAdapterContext);
    }
  }
  if ( v7 )
  {
    v11 = WmiGetClock(0LL, 0LL, a3);
    ndisTraceDpcEnd(v3, 1u, v11 - Clock);
  }
}
