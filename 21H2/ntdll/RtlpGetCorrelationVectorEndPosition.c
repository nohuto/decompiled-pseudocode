/*
 * XREFs of RtlpGetCorrelationVectorEndPosition @ 0x1800851A4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180085160 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800FC1F0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x180085320 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorEndPosition(__int64 a1, __int64 a2)
{
  int CorrelationVectorBufferLength; // eax
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, 0LL);
  v5 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    for ( i = 0LL; i < CorrelationVectorBufferLength; ++i )
    {
      if ( !*(_BYTE *)(v3 + i + 1) )
        break;
      ++v4;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v5 > v4 )
    return (unsigned int)v4;
  return result;
}
