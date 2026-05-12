/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x1C0041F48
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0041E60 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1C00421D0 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C003D950 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // ebp
  NTSTATUS v6; // r14d
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  v2 = *((_QWORD *)Context + 218);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 928));
    v4 = *((_QWORD *)Context + 3);
    Context[449] |= 0x20u;
    v5 = 0;
    if ( *(_QWORD *)(v4 + 5088) && _InterlockedCompareExchange((volatile signed __int32 *)Context + 840, 0, 1) == 1 )
      RaidAdapterPoFxIdleComponent(*((_QWORD *)Context + 3), 0LL, 0LL);
    goto LABEL_16;
  }
  v5 = 0;
  if ( *((_DWORD *)Context + 123) != 1 )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = *((_QWORD *)Context + 218);
    *((_QWORD *)Context + 253) = MEMORY[0xFFFFF78000000008];
    v8 = *(_DWORD *)(v7 + 32);
    if ( *(char *)(*((_QWORD *)Context + 3) + 108LL) >= 0 )
    {
      *(_DWORD *)(v7 + 32) = v8 & 0xFFFFFFDF;
    }
    else
    {
      *(_DWORD *)(v7 + 32) = v8 | 0x20;
      if ( !*((_QWORD *)Context + 250) )
        *((_QWORD *)Context + 250) = *((_QWORD *)Context + 253);
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 218));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0069841 & 1) != 0 )
      {
        v10 = *((_QWORD *)Context + 3);
        LOBYTE(Irp) = Context[96];
        LODWORD(Contexta) = *(_DWORD *)(v10 + 56);
        McTemplateK0pquuuq_EtwWriteTransfer(
          v10,
          &EventUnitPowerNotRequiredStop,
          v9,
          **((_QWORD **)Context + 218),
          Contexta,
          Irp,
          Context[97],
          Context[98],
          v5);
      }
    }
    return;
  }
  if ( (v3 & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 218) + 64LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
LABEL_13:
    if ( v6 >= 0
      && PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      Context[449] |= 1u;
      _InterlockedExchange((volatile __int32 *)Context + 441, 0);
      v5 = 1;
    }
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 476, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 236),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
