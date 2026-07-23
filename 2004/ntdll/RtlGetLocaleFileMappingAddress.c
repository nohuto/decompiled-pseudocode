/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007C790
 * Callers:
 *     RtlpLoadNlsData @ 0x18007C6B4 (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x18009EDE0 (NtInitializeNlsFiles.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax
  PVOID v7; // rcx

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( gBaseAddress )
  {
    *BaseAddress = (PVOID)gBaseAddress;
    *DefaultLocaleId = gDefaultLocaleId;
  }
  else
  {
    result = NtInitializeNlsFiles(BaseAddress, DefaultLocaleId, 0LL, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v7 = *BaseAddress;
    gDefaultLocaleId = *DefaultLocaleId;
    if ( _InterlockedCompareExchange64(&gBaseAddress, (signed __int64)v7, 0LL) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)gBaseAddress;
    }
  }
  return 0;
}
