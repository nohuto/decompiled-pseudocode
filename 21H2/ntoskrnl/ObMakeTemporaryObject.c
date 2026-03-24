/*
 * XREFs of ObMakeTemporaryObject @ 0x14062C010
 * Callers:
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x14062D0A0 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408DC490 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140980960 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C5A18 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x14062CBD0 (ObpDeleteNameCheck.c)
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
  ObpDeleteNameCheck(v2);
}
