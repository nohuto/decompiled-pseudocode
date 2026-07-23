/*
 * XREFs of _RtlNtStatusToDosErrorNoTeb@4 @ 0x4B2E5FE0
 * Callers:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _RtlQueryUnbiasedInterruptTime@4 @ 0x4B2DC510 (_RtlQueryUnbiasedInterruptTime@4.c)
 *     _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2 (_LdrpRedirectDelayloadFailure@28.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  unsigned __int32 v1; // ecx
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // edi
  int v8; // eax

  v1 = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && (HIBYTE(Status) == 192 || HIBYTE(Status) == 128) )
    {
      return (unsigned __int16)v1;
    }
    else
    {
      if ( (Status & 0xF0000000) == 0xD0000000 )
        v1 = Status & 0xCFFFFFFF;
      v3 = 0;
      v4 = 306;
      do
      {
        v5 = (v4 + v3) >> 1;
        v6 = RtlpRunTable[2 * v5];
        v7 = v1 - v6;
        if ( v1 >= v6 )
        {
          if ( v7 < (unsigned __int8)byte_4B28A974[8 * v5] )
          {
            v8 = (unsigned __int16)word_4B28A976[4 * v5];
            if ( byte_4B28A975[8 * v5] == 1 )
              return (unsigned __int16)RtlpStatusTable[v7 + v8];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)word_4B288B62[2 * v7 + v8] << 16);
          }
          v3 = v5 + 1;
        }
        else
        {
          v4 = v5 - 1;
        }
      }
      while ( v3 <= v4 );
      if ( (v1 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)v1;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
  }
  return result;
}
