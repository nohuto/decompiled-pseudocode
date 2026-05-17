/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800FC230
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800851F0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800851A4 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180085320 (RtlpGetCorrelationVectorBufferLength.c)
 *     strncmp @ 0x180091730 (strncmp.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800FC314 (RtlpGetLastContiguosBase64Position.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1)
{
  int LastContiguosBase64Position; // esi
  __int64 v3; // rdx
  int CorrelationVectorEndPosition; // eax
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( (int)RtlpGetCorrelationVectorBufferLength(a1) < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)a1, v3);
  if ( CorrelationVectorEndPosition < 0 )
    return 3221225485LL;
  if ( *a1 == 1 )
  {
    if ( LastContiguosBase64Position != 15 )
      return 3221225485LL;
  }
  else if ( *a1 == 2 && LastContiguosBase64Position != 21 )
  {
    return 3221225485LL;
  }
  v6 = LastContiguosBase64Position + 1;
  v7 = v6;
  if ( a1[v6 + 1] != 46 )
    return 3221225485LL;
  v8 = CorrelationVectorEndPosition;
  while ( v7 < v8 )
  {
    if ( a1[v7 + 1] == 46 )
    {
      ++v6;
      ++v7;
      v9 = 0;
      v10 = v6;
      if ( v7 < v8 )
      {
        do
        {
          if ( (unsigned __int8)(a1[v7 + 1] - 48) > 9u )
            break;
          ++v6;
          ++v7;
          ++v9;
        }
        while ( v7 < v8 );
        if ( v9 && v9 <= 10 && (v9 != 10 || strncmp(&a1[v10 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
