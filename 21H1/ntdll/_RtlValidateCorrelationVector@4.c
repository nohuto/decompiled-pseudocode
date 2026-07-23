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

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  size_t v7; // [esp-4h] [ebp-10h]

  if ( !Vector || (int)RtlpGetCorrelationVectorBufferLength(Vector) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position(Vector);
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(Vector);
  if ( Vector->Version == 1 )
  {
    if ( LastContiguosBase64Position != 15 )
      return -1073741811;
  }
  else if ( Vector->Version == 2 && LastContiguosBase64Position != 21 )
  {
    return -1073741811;
  }
  v4 = LastContiguosBase64Position + 1;
  if ( Vector->Vector[v4] != 46 )
    return -1073741811;
  while ( v4 < CorrelationVectorEndPosition )
  {
    if ( Vector->Vector[v4] == 46 )
    {
      ++v4;
      v5 = 0;
      v6 = v4;
      if ( v4 < CorrelationVectorEndPosition )
      {
        do
        {
          if ( (unsigned __int8)(Vector->Vector[v4] - 48) > 9u )
            break;
          ++v4;
          ++v5;
        }
        while ( v4 < CorrelationVectorEndPosition );
        if ( v5 )
        {
          if ( v5 <= 10 )
          {
            if ( v5 != 10 )
              continue;
            LODWORD(v7) = 10;
            if ( strncmp(&Vector->Vector[v6], "2147483647", v7) <= 0 )
              continue;
          }
        }
      }
    }
    return -1073741811;
  }
  return 0;
}
