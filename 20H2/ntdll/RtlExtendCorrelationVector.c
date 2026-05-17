/*
 * XREFs of RtlExtendCorrelationVector @ 0x180083840
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x180083884 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800839DC (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 RtlExtendCorrelationVector()
{
  int CorrelationVectorBufferLength; // eax
  __int64 v1; // rcx
  unsigned int v2; // r10d
  __int64 v3; // r11

  if ( (int)RtlpGetCorrelationVectorEndPosition() < 0 )
    return (unsigned int)-2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  if ( (int)v3 >= CorrelationVectorBufferLength - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_WORD *)(v3 + v1 + 1) = 12334;
    *(_BYTE *)(v3 + v1 + 3) = v2;
  }
  return v2;
}
