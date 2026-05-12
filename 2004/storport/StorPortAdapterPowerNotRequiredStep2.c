/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C003FD50
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C003FCD0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C003FF70 (StorPortAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00361A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  int v3; // edi
  int v4; // edx
  NTSTATUS v5; // edi
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
  v2 = *((_QWORD *)Context + 636);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL);
  if ( (v4 & 2) == 0 && *((_DWORD *)Context + 69) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (v4 & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1452, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 724),
            StorPortAdapterPowerNotRequiredStep2Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v5 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 636) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v5 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) |= 0x40u;
    }
    v3 = 0;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 108) |= 2u;
      v3 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v6 = *((char *)Context + 108) < 0;
  v7 = *((_QWORD *)Context + 636);
  *((_QWORD *)Context + 672) = MEMORY[0xFFFFF78000000008];
  v8 = *(_DWORD *)(v7 + 20);
  if ( v6 )
  {
    *(_DWORD *)(v7 + 20) = v8 | 8;
    if ( !*((_QWORD *)Context + 671) )
      *((_QWORD *)Context + 671) = *((_QWORD *)Context + 672);
  }
  else
  {
    *(_DWORD *)(v7 + 20) = v8 & 0xFFFFFFF7;
  }
  PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 636));
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    LODWORD(Irp) = v3;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(
      v9,
      &EventAdapterPowerNotRequiredStop,
      v10,
      **((_QWORD **)Context + 636),
      Contexta,
      Irp);
  }
}
