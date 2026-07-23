/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x14024FB54
 * Callers:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall MiLockWorkingSetCoreExclusive(__int64 a1, __int64 a2)
{
  __int64 SharedVm; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  SharedVm = MiGetSharedVm(a1, a2);
  *v3 = 0LL;
  SharedVm += 64LL;
  v3[1] = SharedVm;
  return KxAcquireQueuedSpinLock(v4, SharedVm, v4, v5);
}
