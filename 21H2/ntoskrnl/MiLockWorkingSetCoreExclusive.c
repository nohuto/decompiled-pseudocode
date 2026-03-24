/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x1402D1734
 * Callers:
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall MiLockWorkingSetCoreExclusive(__int64 a1)
{
  LONG *SharedVm; // rax
  _QWORD *v2; // rdx
  __int64 v3; // r8

  SharedVm = MiGetSharedVm(a1);
  *v2 = 0LL;
  SharedVm += 16;
  v2[1] = SharedVm;
  return KxAcquireQueuedSpinLock(v3, SharedVm, v3);
}
