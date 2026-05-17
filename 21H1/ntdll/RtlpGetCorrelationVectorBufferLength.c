/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x4B362541
 * Callers:
 *     _RtlExtendCorrelationVector@4 @ 0x4B362250 (_RtlExtendCorrelationVector@4.c)
 *     _RtlIncrementCorrelationVector@4 @ 0x4B3622A0 (_RtlIncrementCorrelationVector@4.c)
 *     _RtlValidateCorrelationVector@4 @ 0x4B3623E0 (_RtlValidateCorrelationVector@4.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x4B36255C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x4B362583 (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpGetCorrelationVectorBufferLength(char *this)
{
  char v1; // cl

  v1 = *this;
  if ( v1 == 1 )
    return 65;
  else
    return v1 != 2 ? -1 : 129;
}
