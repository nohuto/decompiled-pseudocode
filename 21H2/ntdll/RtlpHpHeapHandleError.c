/*
 * XREFs of RtlpHpHeapHandleError @ 0x180108500
 * Callers:
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800526A0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180107E90 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x180108280 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801087AC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x180109AFC (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x18010E0A4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    RtlpHpRaiseFatalLimitError(RtlpHpHeapHandleError);
  }
  else if ( a1 == 21 )
  {
    HeapCommitFailAvoidTriageRules();
  }
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  return RtlpHeapHandleError();
}
