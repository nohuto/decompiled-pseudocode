/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140913130
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405878A4 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405878EC (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x140912DC0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140912E10 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140912F70 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140913154 (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
