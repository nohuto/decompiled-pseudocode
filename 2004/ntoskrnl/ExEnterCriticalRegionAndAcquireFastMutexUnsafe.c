/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14032EF80
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
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
