/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14021C890
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

$C459BD0D405E8E46662177FB3D0A143F *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(
        ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v2; // eax
  $C459BD0D405E8E46662177FB3D0A143F *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(BugCheckParameter2, v2);
  result = ($C459BD0D405E8E46662177FB3D0A143F *)KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)result->ApcState.ApcListHead[0].Flink != result
      && !CurrentThread->SpecialApcDisable )
    {
      return ($C459BD0D405E8E46662177FB3D0A143F *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
