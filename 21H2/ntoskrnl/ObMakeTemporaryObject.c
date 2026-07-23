/*
 * XREFs of ObMakeTemporaryObject @ 0x14061C330
 * Callers:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x14061C2B0 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408DC5F0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140980B40 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C6A18 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  ObpDeleteNameCheck(v2);
}
