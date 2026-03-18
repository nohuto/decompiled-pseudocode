/*
 * XREFs of ObMakeTemporaryObject @ 0x14070AFD0
 * Callers:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x14070AF50 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x14097D470 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C2A08 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck((__int64)v2);
}
