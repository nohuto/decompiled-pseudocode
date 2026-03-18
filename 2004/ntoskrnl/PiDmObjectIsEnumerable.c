/*
 * XREFs of PiDmObjectIsEnumerable @ 0x1405DB07C
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405D8A38 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v3 = *(_DWORD *)(BugCheckParameter2 + 32) & 1;
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
