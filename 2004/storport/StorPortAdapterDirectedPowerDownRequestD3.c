/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C003F314
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C003F1E0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C003F540 (StorPortAdapterDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00361A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3(PVOID Context)
{
  __int64 v2; // rcx
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // sf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  PIRP *Irp; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( *((_DWORD *)Context + 69) == 1 )
  {
    v2 = *((_QWORD *)Context + 636);
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1452, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 724),
            StorPortAdapterDirectedPowerDownRequestD3Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v3 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 636) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v3 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) |= 0x40u;
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 108) |= 2u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v6 = *((char *)Context + 108) < 0;
  v7 = *((_QWORD *)Context + 636);
  *((_QWORD *)Context + 682) = MEMORY[0xFFFFF78000000008];
  v8 = *(_DWORD *)(v7 + 20);
  if ( v6 )
  {
    *(_DWORD *)(v7 + 20) = v8 | 0x20;
    if ( !*((_QWORD *)Context + 681) )
      *((_QWORD *)Context + 681) = *((_QWORD *)Context + 682);
  }
  else
  {
    *(_DWORD *)(v7 + 20) = v8 & 0xFFFFFFDF;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 636), v4, v5);
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    LODWORD(Irp) = 0;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(
      v9,
      &EventAdapterDirectedPowerDownStop,
      v10,
      **((_QWORD **)Context + 636),
      Contexta,
      Irp);
  }
}
