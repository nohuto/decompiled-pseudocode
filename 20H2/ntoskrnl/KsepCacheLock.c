/*
 * XREFs of KsepCacheLock @ 0x1407440F0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     KseQueryDeviceDataList @ 0x1408C1C20 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall KsepCacheLock(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
