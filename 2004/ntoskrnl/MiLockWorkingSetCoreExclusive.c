/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x14054A2E0
 * Callers:
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
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
  return KxAcquireQueuedSpinLock(v3, (volatile __int64 *)SharedVm);
}
