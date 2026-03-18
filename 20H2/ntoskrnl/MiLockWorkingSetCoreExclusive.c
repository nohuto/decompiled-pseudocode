/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x14054DCB0
 * Callers:
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
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
