/*
 * XREFs of RtlpHpHeapHandleError @ 0x14058E440
 * Callers:
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14058DF68 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14058E3F8 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14058E4D0 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
