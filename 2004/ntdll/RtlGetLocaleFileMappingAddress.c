/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007C790
 * Callers:
 *     RtlpLoadNlsData @ 0x18007C6B4 (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x18009EDE0 (NtInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2)
{
  __int64 result; // rax
  signed __int64 v5; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( gBaseAddress )
  {
    *a1 = gBaseAddress;
    *a2 = gDefaultLocaleId;
  }
  else
  {
    result = NtInitializeNlsFiles(a1, a2, 0LL);
    if ( (int)result < 0 )
      return result;
    v5 = *a1;
    gDefaultLocaleId = *a2;
    if ( _InterlockedCompareExchange64(&gBaseAddress, v5, 0LL) )
    {
      NtUnmapViewOfSection(-1LL, *a1);
      *a1 = gBaseAddress;
    }
  }
  return 0LL;
}
