/*
 * XREFs of CmpStartSiloKeyLockTracker @ 0x14078ED00
 * Callers:
 *     CmInitServerSiloState @ 0x14078ECB8 (CmInitServerSiloState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall CmpStartSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 8) |= 1u;
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
