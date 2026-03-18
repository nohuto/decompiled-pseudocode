/*
 * XREFs of ObMakeTemporaryObject @ 0x1405D6DB0
 * Callers:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1405D6D30 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408DECD0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140983240 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C8A28 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
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
