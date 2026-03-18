/*
 * XREFs of DpiCancelSuspendAdapterTimer @ 0x1C00244F0
 * Callers:
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0023E3C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiCancelSuspendAdapterTimer(__int64 a1)
{
  char v2; // di
  __int64 v3; // r8
  BOOLEAN v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4080), &LockHandle);
    v2 = 1;
  }
  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      &DxgkControlGuid_Context,
      &Dxgk_DevicePowerRequiredTimer,
      v3,
      *(_QWORD *)(a1 + 3896),
      0);
  v4 = KeCancelTimer((PKTIMER)(a1 + 4160));
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v4 )
      KeFlushQueuedDpcs();
  }
}
