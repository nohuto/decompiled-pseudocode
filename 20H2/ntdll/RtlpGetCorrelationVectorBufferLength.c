/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800839DC
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180083840 (RtlExtendCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180083884 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlIncrementCorrelationVector @ 0x1800838D0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800FC390 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800FC470 (RtlpGetLastContiguosBase64Position.c)
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
