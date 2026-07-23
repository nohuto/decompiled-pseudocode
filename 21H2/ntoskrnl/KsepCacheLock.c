/*
 * XREFs of KsepCacheLock @ 0x1407499D0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     KseQueryDeviceDataList @ 0x1408BF540 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall KsepCacheLock(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
