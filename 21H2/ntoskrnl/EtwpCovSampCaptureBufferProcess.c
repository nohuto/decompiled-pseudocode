/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x14088399A
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14088394C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextAddAddresses @ 0x1409EF3C8 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampContextAddSamples @ 0x1409EF4C4 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x1409F226C (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddSamples(BugCheckParameter2);
    goto LABEL_7;
  }
  if ( (unsigned int)EtwpCovSampStackHashCheck(a1, v4, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
  {
LABEL_6:
    v5 = BugCheckParameter2;
  }
  else
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddAddresses(BugCheckParameter2);
  }
LABEL_7:
  if ( v5 )
  {
    ExReleaseRundownProtection(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
