/*
 * XREFs of ObCheckActiveHandles @ 0x1407023CC
 * Callers:
 *     MiFinishCreateSection @ 0x1405FB480 (MiFinishCreateSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 - 32;
  ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
  v4 = *(_QWORD *)(a1 - 40);
  ExReleasePushLockEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4 != 0;
}
