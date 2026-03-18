/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x14088394C
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x14088399A (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampImageNotify @ 0x1409F1600 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409F209C (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x1409F2984 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F3C74 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&stru_140C15D80) )
  {
    *a1 = qword_140C15D78;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
