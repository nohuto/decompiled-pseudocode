/*
 * XREFs of _RtlpHpHeapHandleError@12 @ 0x4B36D980
 * Callers:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _HeapCommitFailAvoidTriageRules@0 @ 0x4B36D480 (_HeapCommitFailAvoidTriageRules@0.c)
 *     _RtlpHpRaiseFatalLimitError@4 @ 0x4B36DBB0 (_RtlpHpRaiseFatalLimitError@4.c)
 *     _RtlpLocateRelatedBlocks@8 @ 0x4B36EA9C (_RtlpLocateRelatedBlocks@8.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

USHORT __stdcall RtlpHpHeapHandleError(int a1, int a2, int a3)
{
  USHORT result; // ax
  size_t v4; // [esp-4h] [ebp-2Ch]

  LODWORD(v4) = 128;
  memset(&BackTrace, 0, v4);
  result = RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0);
  switch ( a1 )
  {
    case 20:
      RtlpHpRaiseFatalLimitError(RtlpHpHeapHandleError);
    case 21:
      HeapCommitFailAvoidTriageRules();
    case 3:
      result = RtlpLocateRelatedBlocks(a2, a3);
      break;
  }
  if ( !byte_4B3A5DA8 )
    return RtlpReportHeapFailure(2);
  return result;
}
