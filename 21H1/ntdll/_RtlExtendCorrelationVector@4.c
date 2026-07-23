/*
 * XREFs of _RtlExtendCorrelationVector@4 @ 0x4B362250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x4B36255C (RtlpGetCorrelationVectorEndPosition.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  DWORD v1; // ebx
  __int64 CorrelationVectorBufferLength; // rax

  v1 = 0;
  if ( RtlpGetCorrelationVectorEndPosition(CorrelationVector) < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  if ( SHIDWORD(CorrelationVectorBufferLength) >= (int)CorrelationVectorBufferLength - 3 )
    return -2147483643;
  strcpy(&CorrelationVector->Vector[HIDWORD(CorrelationVectorBufferLength)], ".0");
  return v1;
}
