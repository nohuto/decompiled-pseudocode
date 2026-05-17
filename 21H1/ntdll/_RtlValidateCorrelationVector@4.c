/*
 * XREFs of _RtlValidateCorrelationVector@4 @ 0x4B3623E0
 * Callers:
 *     <none>
 * Callees:
 *     _strncmp @ 0x4B2F9EA0 (_strncmp.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x4B362541 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x4B36255C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x4B362583 (RtlpGetLastContiguosBase64Position.c)
 */

int __stdcall RtlValidateCorrelationVector(_BYTE *a1)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // edx

  if ( !a1 || (int)RtlpGetCorrelationVectorBufferLength(a1) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(a1);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1);
  if ( *a1 == 1 )
  {
    if ( LastContiguosBase64Position != 15 )
      return -1073741811;
  }
  else if ( *a1 == 2 && LastContiguosBase64Position != 21 )
  {
    return -1073741811;
  }
  v4 = LastContiguosBase64Position + 1;
  if ( a1[v4 + 1] != 46 )
    return -1073741811;
  while ( v4 < CorrelationVectorEndPosition )
  {
    if ( a1[v4 + 1] == 46 )
    {
      ++v4;
      v5 = 0;
      v6 = v4;
      if ( v4 < CorrelationVectorEndPosition )
      {
        do
        {
          if ( (unsigned __int8)(a1[v4 + 1] - 48) > 9u )
            break;
          ++v4;
          ++v5;
        }
        while ( v4 < CorrelationVectorEndPosition );
        if ( v5 && v5 <= 10 && (v5 != 10 || strncmp(&a1[v6 + 1], "2147483647", 0xAu) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
