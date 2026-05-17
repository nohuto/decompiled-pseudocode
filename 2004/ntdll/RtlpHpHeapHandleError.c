/*
 * XREFs of RtlpHpHeapHandleError @ 0x180108150
 * Callers:
 *     RtlpLogHeapFailure @ 0x18010DE0C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800515A0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180107AE0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x180107ED0 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801083FC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x18010974C (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
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
