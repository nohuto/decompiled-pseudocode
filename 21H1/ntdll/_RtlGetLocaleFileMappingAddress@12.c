/*
 * XREFs of _RtlGetLocaleFileMappingAddress@12 @ 0x4B2EA2B0
 * Callers:
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 * Callees:
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtInitializeNlsFiles@12 @ 0x4B2F3970 (_NtInitializeNlsFiles@12.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  ULONG *v4; // edi
  NTSTATUS result; // eax
  PVOID v6; // ecx

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( gBaseAddress )
  {
    *BaseAddress = gBaseAddress;
    *DefaultLocaleId = gDefaultLocaleId;
  }
  else
  {
    result = NtInitializeNlsFiles(BaseAddress, DefaultLocaleId, 0, v4);
    if ( result < 0 )
      return result;
    v6 = *BaseAddress;
    gDefaultLocaleId = *DefaultLocaleId;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&gBaseAddress, (signed __int32)v6, 0) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *BaseAddress);
      *BaseAddress = gBaseAddress;
    }
  }
  return 0;
}
