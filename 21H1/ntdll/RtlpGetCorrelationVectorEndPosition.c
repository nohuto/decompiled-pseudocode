/*
 * XREFs of RtlpGetCorrelationVectorEndPosition @ 0x4B36255C
 * Callers:
 *     _RtlExtendCorrelationVector@4 @ 0x4B362250 (_RtlExtendCorrelationVector@4.c)
 *     _RtlValidateCorrelationVector@4 @ 0x4B3623E0 (_RtlValidateCorrelationVector@4.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 */

int __thiscall RtlpGetCorrelationVectorEndPosition(char *this)
{
  int CorrelationVectorBufferLength; // eax
  int v3; // edx

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(this);
  if ( CorrelationVectorBufferLength <= 0 )
    return -1;
  do
  {
    if ( !this[v3 + 1] )
      break;
    ++v3;
  }
  while ( v3 < CorrelationVectorBufferLength );
  if ( CorrelationVectorBufferLength <= v3 )
    return -1;
  return v3;
}
