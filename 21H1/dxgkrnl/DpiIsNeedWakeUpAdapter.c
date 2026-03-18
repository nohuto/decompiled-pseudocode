/*
 * XREFs of DpiIsNeedWakeUpAdapter @ 0x1C00502E8
 * Callers:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0036A04 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DpiIsNeedWakeUpAdapter(__int64 a1)
{
  __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 4072), &LockHandle);
  LOBYTE(v1) = *(_DWORD *)(v1 + 4136) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v1;
}
