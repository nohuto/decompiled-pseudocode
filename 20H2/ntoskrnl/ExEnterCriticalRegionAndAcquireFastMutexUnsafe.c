/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140302B90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  result = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  v5 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
    result = ExpAcquireFastMutexContended(BugCheckParameter2, result);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  *(_QWORD *)(BugCheckParameter2 + 8) = v3;
  return result;
}
