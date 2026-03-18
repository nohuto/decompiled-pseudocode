/*
 * XREFs of PiDmObjectIsEnumerable @ 0x140779800
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x140779850 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
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
  KeLeaveCriticalRegion();
  return v3;
}
