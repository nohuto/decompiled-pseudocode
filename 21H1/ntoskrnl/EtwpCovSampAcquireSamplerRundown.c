/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x14093D684
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093D86C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x14093D980 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x140940840 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140941334 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x140941C14 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140942EEC (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C19860) )
  {
    *a1 = qword_140C19858;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
