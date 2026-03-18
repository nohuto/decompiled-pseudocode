/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x14093E904
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093EAEC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x14093EC00 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x140941AC0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409425B4 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x140942E94 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140944160 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C196E0) )
  {
    *a1 = qword_140C196D8;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
