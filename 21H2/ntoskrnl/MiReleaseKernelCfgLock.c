/*
 * XREFs of MiReleaseKernelCfgLock @ 0x14097F8F8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14097F690 (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  $CEA84C04E3712D858E5667A507841A2A *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F3F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F3F8);
  LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C4F3F8);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v1 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v1->ApcState.ApcListHead[0].Flink != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
