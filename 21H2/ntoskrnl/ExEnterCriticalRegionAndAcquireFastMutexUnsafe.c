/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14021B630
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

_RTL_BALANCED_NODE *__fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  _RTL_BALANCED_NODE *result; // rax
  _RTL_BALANCED_NODE *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  result = (_RTL_BALANCED_NODE *)KeAbPreAcquire(a1, 0LL);
  v5 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a1, 0) )
    result = (_RTL_BALANCED_NODE *)ExpAcquireFastMutexContended(a1, result);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
