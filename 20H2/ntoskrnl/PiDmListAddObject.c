/*
 * XREFs of PiDmListAddObject @ 0x1407449AC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x14078AF50 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14063EFC0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140744A78 (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddObject(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  void *v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
