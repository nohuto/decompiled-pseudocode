/*
 * XREFs of ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00AA940
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F9D0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_BLOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *p_Lock; // rdi

  p_Lock = &DeferredContext->Lock;
  while ( 1 )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
    DeferredContext->MiniportThread = KeGetCurrentThread();
    if ( !DeferredContext->LockAcquired )
      break;
    DeferredContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    KeStallExecutionProcessor(1u);
  }
  DeferredContext->LockAcquired = 1;
  DeferredContext->LockThread = KeGetCurrentThread();
  ndisMProcessDeferred(DeferredContext);
  DeferredContext->LockThread = 0LL;
  DeferredContext->MiniportThread = 0LL;
  DeferredContext->LockAcquired = 0;
  KeReleaseSpinLockFromDpcLevel(p_Lock);
}
