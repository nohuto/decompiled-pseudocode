/*
 * XREFs of ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005F040
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F4C (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006FC60 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070344 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  unsigned __int8 v5; // di
  __int64 Clock; // r14
  char v7; // bp
  __int64 v8; // r8
  int Flags; // r8d
  int v10; // edx
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v14; // rdx
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00E6150) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  Flags = FunctionContext->Flags;
  FunctionContext->MiniportThread = KeGetCurrentThread();
  if ( Flags >= 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 && !FunctionContext->LockAcquired )
  {
    FunctionContext->LockAcquired = 1;
    FunctionContext->LockThread = KeGetCurrentThread();
    if ( (Flags & 0x300000) != 0 )
      goto LABEL_33;
    v10 = Flags;
    if ( FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
    {
      FunctionContext->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
      v5 = FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(FunctionContext->MiniportAdapterContext);
      KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
      Flags = FunctionContext->Flags;
      v10 = Flags;
      FunctionContext->MiniportThread = KeGetCurrentThread();
    }
    if ( (v10 & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++FunctionContext->MiniportResetCount;
LABEL_28:
      if ( (Flags & 0x1000000) == 0
        && FunctionContext->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      {
        ndisMQueueWorkItem(FunctionContext, NdisWorkItemResetRequested, 0LL);
      }
      goto LABEL_32;
    }
    if ( (v10 & 0x1000) == 0 )
    {
      WSyncFlags = FunctionContext->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          if ( FunctionContext->PendingOidRequest )
          {
LABEL_27:
            ++FunctionContext->InternalResetCount;
            goto LABEL_28;
          }
        }
        else
        {
          CFHangXTicks = FunctionContext->CFHangXTicks;
          if ( CFHangXTicks )
            FunctionContext->CFHangXTicks = CFHangXTicks - 1;
          else
            FunctionContext->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    if ( (v10 & 0x800) != 0 )
      goto LABEL_32;
    Flink = FunctionContext->PacketList.Flink;
    v14 = Flink - 4;
    if ( Flink == &FunctionContext->PacketList )
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_32;
    v15 = BYTE1(v14[2].Blink);
    if ( (v15 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v15 & 1) == 0 )
    {
      BYTE1(v14[2].Blink) = v15 | 1;
LABEL_32:
      ndisMProcessDeferred(FunctionContext);
LABEL_33:
      FunctionContext->LockThread = 0LL;
      FunctionContext->LockAcquired = 0;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( (FunctionContext->Flags & 0x80000000) == 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 )
    ndisSetWakeUpTimer(FunctionContext);
  if ( v7 )
  {
    v17 = WmiGetClock(0LL, 0LL, v16);
    ndisTraceDpcEnd(FunctionContext, 4u, v17 - Clock);
  }
  FunctionContext->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
}
