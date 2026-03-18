/*
 * XREFs of RtlpHpHeapHandleError @ 0x140591EE4
 * Callers:
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140591A0C (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140591E9C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x140591F74 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
