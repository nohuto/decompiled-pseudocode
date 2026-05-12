/*
 * XREFs of RaUnitReleaseDeviceSrb @ 0x1C00479BC
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitReleaseDeviceSrb(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  *(_BYTE *)(a1 + 448) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  BYTE3(SecurityContext->SecurityQos) = 1;
  return RaidCompleteRequestEx(a2, 0, 0);
}
