/*
 * XREFs of RtlpGetCorrelationVectorLastDotPosition @ 0x1800852D4
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800851F0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x180085320 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorLastDotPosition(__int64 a1)
{
  int CorrelationVectorBufferLength; // eax
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  char v7; // dl
  int v8; // ecx

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  v5 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_BYTE *)(v4 + v6 + 1);
      v8 = v3;
      if ( !v7 )
        break;
      ++v3;
      ++v6;
      if ( v7 != 46 )
        v8 = v2;
      v2 = v8;
    }
    while ( v6 < v5 );
  }
  return v2;
}
