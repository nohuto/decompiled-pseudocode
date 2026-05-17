/*
 * XREFs of _RtlExtendCorrelationVector@4 @ 0x4B362250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x4B36255C (RtlpGetCorrelationVectorEndPosition.c)
 */

int __stdcall RtlExtendCorrelationVector(int a1)
{
  int v1; // ebx
  __int64 CorrelationVectorBufferLength; // rax

  v1 = 0;
  if ( RtlpGetCorrelationVectorEndPosition(a1) < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  if ( SHIDWORD(CorrelationVectorBufferLength) >= (int)CorrelationVectorBufferLength - 3 )
    return -2147483643;
  strcpy((char *)(HIDWORD(CorrelationVectorBufferLength) + a1 + 1), ".0");
  return v1;
}
