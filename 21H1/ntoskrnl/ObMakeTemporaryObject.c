/*
 * XREFs of ObMakeTemporaryObject @ 0x140704430
 * Callers:
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1407043B0 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408D7B20 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x14097C0D0 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C29F8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
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
  ObpDeleteNameCheck((__int64)v2);
}
