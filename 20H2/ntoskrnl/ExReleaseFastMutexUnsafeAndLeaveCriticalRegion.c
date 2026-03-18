/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1403032C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x140242CEC (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  $C774EFD68449142D8271B1EC1EB7FB26 *v3; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)BugCheckParameter2, v2);
  LOBYTE(v3) = KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != v3
      && !CurrentThread->SpecialApcDisable )
    {
      LOBYTE(v3) = KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
  }
  return (char)v3;
}
