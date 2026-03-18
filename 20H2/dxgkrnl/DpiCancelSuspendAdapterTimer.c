/*
 * XREFs of DpiCancelSuspendAdapterTimer @ 0x1C0050424
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C00508E4 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C005103C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall DpiCancelSuspendAdapterTimer(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  BOOLEAN v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4072), &LockHandle);
    v2 = 1;
  }
  v3 = WdLogNewEntry5_WdPower();
  *(_QWORD *)(v3 + 24) = a1;
  *(_OWORD *)(v3 + 32) = 0LL;
  WdLogEvent5_WdPower(v3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v4, &Dxgk_DevicePowerRequiredTimer, v5, *(_QWORD *)(a1 + 3896), 0);
  v6 = KeCancelTimer((PKTIMER)(a1 + 4152));
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v6 )
      KeFlushQueuedDpcs();
  }
}
