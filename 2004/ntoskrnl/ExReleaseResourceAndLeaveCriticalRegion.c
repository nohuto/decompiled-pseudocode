/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14020A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14020A2F0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpFastResourceLegacyRelease @ 0x14038BA8C (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int16 v2; // ax
  ULONG_PTR v3; // rdi
  __int64 v4; // rdx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // r9
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Resource->Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
  {
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v3 = (ULONG_PTR)KeGetCurrentThread();
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource, v4, KeGetCurrentThread())
      && (v3 & 3) != 3
      && v3 != v6 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v6, v3, 0LL);
    }
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      ExpReleaseResourceSharedForThreadLite(v5, v3, &LockHandle, v7);
    else
      ExpReleaseResourceExclusiveForThreadLite(v5, v3);
  }
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable++ == -1;
  if ( v9
    && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
