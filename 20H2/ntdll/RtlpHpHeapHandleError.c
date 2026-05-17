/*
 * XREFs of RtlpHpHeapHandleError @ 0x180108660
 * Callers:
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800515F0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180107FF0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x1801083E0 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010890C (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x180109C5C (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
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
