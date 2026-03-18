/*
 * XREFs of RtlpHpHeapHandleError @ 0x14058DD50
 * Callers:
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14032C8F0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14058D878 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14058DD08 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14058DDE0 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
